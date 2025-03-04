#ifndef _SCENE_AI_H
#define _SCENE_AI_H

#include "math/vector3.h"
#include "scene/levelbase.h"
#include "scene/playerinput.h"
#include "scene/leveldefinition.h"
#include "scene/teamentity.h"
#include "ai_pathfinder.h"
#include "ai_planner.h"

#define BASE_ACCEPTANCE_RADIUS 300.f
#define ATTACK_ACCEPTANCE_RADIUS 300.f

struct AIController{
    struct PathfindingDefinition* pathfindingInfo; 

    unsigned botAction; //0 - nothing, 1 - attack, 2 - go to the base
    unsigned playerIndex;
    unsigned teamIndex;
    unsigned lastPathfidningIndex;
    unsigned numMinions;
    float punchDelay;
    float difficulty;

    struct Vector3 currTarget;
    struct TeamEntity* attackTarget;
    struct AIPlanner planner;
    struct Pathfinder pathfinder;
    struct DynamicSceneEntry* collider;
};

void ai_moveTowardsTarget(struct AIController* inController, struct Vector3* currLocation, struct PlayerInput* inputRef);
void ai_Init(struct AIController* inController, struct PathfindingDefinition* pathfinder, unsigned playerIndex, unsigned teamIndex, unsigned baseCount, float difficulty);
void ai_update(struct LevelScene* level, struct AIController* ai);
void ai_collectPlayerInput(struct LevelScene* levelScene, struct AIController* ai, struct PlayerInput* playerInput);


#endif