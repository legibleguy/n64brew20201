#ifndef _SCENE_AI_H
#define _SCENE_AI_H

#include "math/vector3.h"
#include "levelbase.h"
#include "playerinput.h"
#include "leveldefinition.h"
#include "teamentity.h"


#define MOVETO_ACCEPTANCE_RADIUS  10
#define BASE_ACCEPTANCE_RADIUS 10
#define ATTACK_ACCEPTANCE_RADIUS 10

struct AIController{
    struct PathfindingDefinition* pathfindingInfo; 

    unsigned botAction; //0 - nothing, 1 - attack, 2 - go to the base
    unsigned playerIndex;
    unsigned teamIndex;
    unsigned lastPathfidningIndex;
    unsigned isUsingPathfinding;

    struct Vector3 currTarget;
    struct LevelBase* targetBase;
    struct TeamEntity* attackTarget;
};

void ai_moveTowardsTarget(struct AIController* inController, struct Vector3* currLocation, struct PlayerInput* inputRef);
void ai_Init(struct AIController* inController, struct PathfindingDefinition* pathfinder, unsigned playerIndex, unsigned teamIndex);
void ai_setTargetBase(struct AIController* inController, struct LevelBase* inBase, unsigned short bBuildPath, struct Vector3* currPlayerPosition);
struct LevelBase* ai_getClosestUncapturedBase(struct LevelBase* bases, unsigned baseCount, struct Vector3* closeTo, unsigned team);


#endif