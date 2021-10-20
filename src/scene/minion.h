#ifndef _MINION_H
#define _MINION_H

#include "math/transform.h"
#include "sk64/skelatool_armature.h"
#include "sk64/skelatool_animation.h"
#include "graphics/render_state.h"
#include "teamentity.h"
#include "collision/dynamicscene.h"

enum MinionFlags {
    MinionFlagsActive = (1 << 0),
};

enum MinionType {
    MinionTypeMelee,
    MinionTypeCount,
};

enum MinionCurrentTask {
    MinionActiontypeFollow,
    MinionActiontypeAttack,
    MinionActiontypeDefend,
};

struct Minion {
    struct TeamEntity team;
    struct Transform transform;
    struct Vector3 velocity;
    unsigned char minionFlags;
    unsigned char minionType;
    unsigned char sourceBaseId;
    unsigned char currentAction;

    struct DynamicSceneEntry* collider;

    // struct SKArmature armature;
    // struct SKAnimator animator;
    
};

void minionSetup();

void minionInit(struct Minion* minion, enum MinionType type, struct Transform* at, unsigned char baseId, unsigned team);
void minionRender(struct Minion* minion, struct RenderState* renderState);
void minionUpdate(struct Minion* minion);
void minionCleanup(struct Minion* minion);

#endif