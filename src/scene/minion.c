
#include <ultra64.h>

#include "minion.h"
#include "util/rom.h"
#include "graphics/gfx.h"
#include "util/time.h"
#include <stdlib.h>

#include "sk64/skelatool_clip.h"
#include "scene_management.h"
#include "collision/circle.h"
#include "collision/collisionlayers.h"
#include "scene_management.h"
#include "team_data.h"
#include "minion_animations.h"
#include "math/mathf.h"
#include "events.h"
#include "target_finder.h"
#include "faction.h"
#include "levelbase.h"


#define MINION_FOLLOW_DIST  3.0f
#define MINION_MOVE_SPEED   (PLAYER_BASE_MOVE_SPEED * 10.0f)
#define MINION_ACCELERATION (PLAYER_MOVE_ACCELERATION * 2.0f)
#define MINION_HP           3.5
#define DEFENDER_HEAL_RATE  0.2f
#define ATTACK_RATE         0.8f
#define MINION_DPS          1.1f
#define INVINCIBILITY_TIME  0.5f
#define INVINCIBLE_FLASH_FREQ                      0.1f
#define ATTACK_RADIUS       (1.0f * SCENE_SCALE)
#define RENDER_SCALE           0.6f

struct CollisionCircle gMinionCollider = {
    {CollisionShapeTypeCircle},
    MINION_COLLIDE_RADIUS,
};

struct MinionDef {
    Gfx* dl;
    unsigned boneCount;
    struct Transform* defaultPose;
};

void minionCorrectOverlap(struct DynamicSceneOverlap* overlap) {
    teamEntityCorrectOverlap(overlap);

    if (overlap->otherEntry->flags & DynamicSceneEntryHasTeam) {
        struct Minion* minion = (struct Minion*)overlap->thisEntry->data;
        struct TeamEntity* entityB = (struct TeamEntity*)overlap->otherEntry->data;

        if (entityB->teamNumber != minion->team.teamNumber && 
            minion->attackTarget == 0 && 
            minion->currentCommand != MinionCommandFollow && 
            minion->attackTimer <= 0.0f) {
            minionSetAttackTarget(minion, entityB);
        }
    }
}

void minionAnimationEvent(struct SKAnimator* animator, void* data, struct SKAnimationEvent* event) {
    struct Minion* minion = (struct Minion*)data;

    if (event->id == MINION_ANIMATION_EVENT_ATTACK && minion->attackTarget) {
        float distSqr = vector3DistSqrd(teamEntityGetPosition(minion->attackTarget), &minion->transform.position);
        if (distSqr < ATTACK_RADIUS * ATTACK_RADIUS) {
            teamEntityApplyDamage(minion->attackTarget, MINION_DPS * ATTACK_RATE);
        } else {
            minion->attackTarget = 0;
        }
    } else if (event->id == SK_ANIMATION_EVENT_END) {
        minion->attackTarget = 0;
    }
}

void minionInit(struct Minion* minion, enum MinionType type, struct Transform* at, unsigned char sourceBaseId, unsigned team, enum MinionCommand defualtCommand, unsigned followPlayer) {
    minion->team.teamNumber = team;
    minion->team.entityType = TeamEntityTypeMinion;

    minion->transform = *at;
    minion->minionType = type;
    minion->minionFlags = MinionFlagsActive;
    minion->sourceBaseId = sourceBaseId;
    minion->velocity = gZeroVec;
    minion->attackTimer = 0.0f;
    damageHandlerInit(&minion->damageHandler, MINION_HP);
    pathfinderInit(&minion->pathfinder, &minion->transform.position);

    struct Vector2 position;

    position.x = minion->transform.position.x;
    position.y = minion->transform.position.z;

    minion->collider = dynamicSceneNewEntry(
        &gMinionCollider.shapeCommon, 
        minion, 
        &position,
        minionCorrectOverlap,
        DynamicSceneEntryHasTeam,
        CollisionLayersTangible | CollisionLayersBase | COLLISION_LAYER_FOR_TEAM(team)
    );

    quatAxisAngle(&gUp, M_PI * 2.0f * rand() / RAND_MAX, &minion->transform.rotation);

    minion->currentCommand = -1;
    minionIssueCommand(minion, defualtCommand, followPlayer);

    skAnimatorInit(&minion->animator, 1, minionAnimationEvent, minion);
    skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_IDLE_INDEX], SKAnimatorFlagsLoop);
    transformInitIdentity(&minion->animationTransform);
    vector3Scale(&gOneVec, &minion->transform.scale, RENDER_SCALE);
}

void minionRender(struct Minion* minion, struct RenderState* renderState) {
    Mtx* matrix = renderStateRequestMatrices(renderState, 1);

    if (!matrix) {
        return;
    }

    struct Transform finalTransform;
    transformConcat(&minion->transform, &minion->animationTransform, &finalTransform);
    transformToMatrixL(&finalTransform, matrix);

    int isDamageFlash = damageHandlerIsFlashing(&minion->damageHandler);

    gDPPipeSync(renderState->dl++);
    gDPUseTeamPallete(renderState->dl++, isDamageFlash ? DAMAGE_PALLETE_INDEX : minion->team.teamNumber, 0);
    gSPMatrix(renderState->dl++, osVirtualToPhysical(matrix), G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH);
    gSPDisplayList(renderState->dl++, gTeamFactions[minion->team.teamNumber]->minionMesh);
    gSPPopMatrix(renderState->dl++, G_MTX_MODELVIEW);
}

void minionIssueCommand(struct Minion* minion, enum MinionCommand command, unsigned fromPlayer) {
    if (command == MinionCommandDefend) {
        minion->defensePoint = minion->transform.position;
    }
    
    minion->currentTarget = 0;
    minion->currentCommand = command;
    minion->attackTarget = 0;
    minion->followingPlayer = fromPlayer;
}
    
void minionUpdate(struct Minion* minion) {
    struct Vector3* target = 0;
    float minDistance = 0.0f;

    minion->attackTimer -= gTimeDelta;

    damageHandlerUpdate(&minion->damageHandler);

    if (minion->damageHandler.hp <= 0) {
        if (minion->collider) {
            dynamicSceneDeleteEntry(minion->collider);
            minion->collider = 0;
        }

        if (!skAnimatorIsRunning(&minion->animator)) {
            minionCleanup(minion);
        }
        skAnimatorUpdate(&minion->animator, &minion->animationTransform, 1.0f);
        return;
    }

    if (minion->currentTarget && !teamEntityIsAlive(minion->currentTarget)) {
        minion->currentTarget = 0;
    }

    switch (minion->currentCommand) {
        case MinionCommandFollow:
            if(minion->pathfinder.currentNode < gCurrentLevel.definition->pathfinding.nodeCount) {
                target = &gCurrentLevel.definition->pathfinding.nodePositions[minion->pathfinder.currentNode]; 
            } else {
                target = &gCurrentLevel.players[minion->followingPlayer].transform.position;
                minDistance = MINION_FOLLOW_DIST * SCENE_SCALE;
            }
            break;
        case MinionCommandDefend:
            minion->damageHandler.hp += DEFENDER_HEAL_RATE * gTimeDelta;

            if (minion->damageHandler.hp > MINION_HP) {
                minion->damageHandler.hp = MINION_HP;
            }

            target = teamEntityGetPosition(minion->currentTarget);
        
            if (target != 0) {
                float distSqrd = vector3DistSqrd(target, &minion->defensePoint);
                if (distSqrd > MINION_DEFENSE_RADIUS * MINION_DEFENSE_RADIUS) {
                    minion->currentTarget = 0;
                    target = 0;
                }
            }

            if (target == 0) {
                target = &minion->defensePoint;
                minDistance = SCENE_SCALE;
            }

            break;
        case MinionCommandAttack:
            minDistance = SCENE_SCALE;

            if (minion->currentTarget && (minion->currentTarget->entityType != TeamEntityTypeBase || minion->pathfinder.currentNode == NODE_NONE)) {
                target = teamEntityGetPosition(minion->currentTarget);
                minDistance = ATTACK_RADIUS * 0.5f;
            } else {
                if(minion->pathfinder.currentNode < gCurrentLevel.definition->pathfinding.nodeCount) {
                    target = &gCurrentLevel.definition->pathfinding.nodePositions[minion->pathfinder.currentNode]; 
                }
            }

            break;
    }
    pathfinderUpdate(&minion->pathfinder, &gCurrentLevel.definition->pathfinding, &minion->transform.position, &minion->transform.position);

    pathfinderUpdate(&minion->pathfinder, &gCurrentLevel.definition->pathfinding, &minion->transform.position, &minion->transform.position);

    if (minion->attackTarget) {
        if (!teamEntityIsAlive(minion->attackTarget)) {
            minion->attackTarget = 0;
        } else if (!skAnimatorIsRunning(&minion->animator)) {
            skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_IDLE_INDEX], SKAnimatorFlagsLoop);
        } else {
            target = teamEntityGetPosition(minion->attackTarget);
            minDistance = ATTACK_RADIUS;
        }
    }

    struct Vector3 targetVelocity = gZeroVec;

    int useWalkAnimation = 0;

    if (target) {
        struct Vector3 offset;
        vector3Sub(target, &minion->transform.position, &offset);
        offset.y = 0.0f;

        float distSqr = vector3MagSqrd(&offset);

        if (distSqr > minDistance * minDistance) {
            vector3Scale(&offset, &targetVelocity, MINION_MOVE_SPEED / sqrtf(distSqr));
            useWalkAnimation = 1;
        }
        else{
           // if(minion->pathfinder.currentNode != NODE_NONE && minion->pathfinder.currentNode == minion->pathfinder.targetNode){
               // minionIssueCommand(minion, MinionCommandDefend, minion->followingPlayer);
               // pathfinderReset(&minion->pathfinder);
            //}
        }
    }

    if (useWalkAnimation) {
        if (minion->animator.currentAnimation == 0 ||
            minion->animator.currentAnimation == &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_IDLE_INDEX]) {
            skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_MOVEFORWARD_INDEX], SKAnimatorFlagsLoop);
        }
    } else {
        if (minion->animator.currentAnimation == 0 ||
            minion->animator.currentAnimation == &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_MOVEFORWARD_INDEX]) {
            skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_IDLE_INDEX], SKAnimatorFlagsLoop);
        }
    }

    vector3MoveTowards(&minion->velocity, &targetVelocity, MINION_ACCELERATION * gTimeDelta, &minion->velocity);
    vector3Scale(&minion->velocity, &minion->velocity, 0.9f);
    vector3AddScaled(&minion->transform.position, &minion->velocity, SCENE_SCALE * gTimeDelta, &minion->transform.position);

    struct Vector2 right;
    right.x = -minion->velocity.x;
    right.y = minion->velocity.z;

    if (right.x != 0.0f || right.y != 0.0f) {
        vector2Normalize(&right, &right);
        quatAxisComplex(&gUp, &right, &minion->transform.rotation);
    }

    dynamicEntrySetPos3D(minion->collider, &minion->transform.position);

    skAnimatorUpdate(&minion->animator, &minion->animationTransform, 1.0f);
}

void minionCleanup(struct Minion* minion) {
    if (minion->minionFlags & MinionFlagsActive) {
        minion->minionFlags = 0;
        levelBaseReleaseMinion(&gCurrentLevel.bases[minion->sourceBaseId]);

        if (minion->collider) {
            dynamicSceneDeleteEntry(minion->collider);
            minion->collider = 0;
        }
    }
}

void minionSetAttackTarget(struct Minion* minion, struct TeamEntity* target) {
    minion->attackTarget = target;
    minion->attackTimer = ATTACK_RATE;
    skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_ATTACK_INDEX], 0);
}

void minionApplyDamage(struct Minion* minion, float amount) {
    if (minion->damageHandler.hp > 0.0f) {
        damageHandlerApplyDamage(&minion->damageHandler, amount, INVINCIBILITY_TIME);

        if (minion->damageHandler.hp <= 0.0f) {
            gLastDeathTime = gTimePassed;
            skAnimatorRunClip(&minion->animator, &minion_animations_animations[MINION_ANIMATIONS_MINION_ANIMATIONS_ARMATURE_DIE_INDEX], 0);
        }
    }
}

int minionIsAlive(struct Minion* minion) {
    return (minion->minionFlags & MinionFlagsActive) != 0 && minion->damageHandler.hp > 0;
}

void minionSetTarget(struct Minion* minion, struct TeamEntity* value) {
    minion->currentTarget = value;

    if(minion->currentTarget && minion->currentTarget->entityType == TeamEntityTypeBase && vector3DistSqrd(teamEntityGetPosition(minion->currentTarget), &minion->transform.position) > 10000) {
        pathfinderSetTarget(&minion->pathfinder, &gCurrentLevel.definition->pathfinding, &minion->transform.position, teamEntityGetPosition(minion->currentTarget));
    } else {
        pathfinderReset(&minion->pathfinder);
    }
}