#ifndef _LEVEL_SCENE_H
#define _LEVEL_SCENE_H

#include <ultra64.h>

#include "game_defs.h"
#include "camera.h"
#include "minion.h"
#include "base.h"
#include "graphics/render_state.h"
#include "leveldefinition.h"

#define MAX_MINIONS_PER_BASE       3

struct LevelScene {
    struct Camera cameras[MAX_PLAYERS];
    unsigned int playerCount;

    struct LevelBase *bases;
    unsigned int baseCount;
    
    Gfx* levelDL;
    struct Minion* minions;
    unsigned int minionCount;

};

void levelSceneInit(struct LevelScene* levelScene, struct LevelDefinition* definition, unsigned int playercount);
void levelSceneRender(struct LevelScene* levelScene, struct RenderState* renderState);
void levelSceneUpdate(struct LevelScene* levelScene);

void levelSceneSpawnMinion(struct LevelScene* levelScene, enum MinionType type, struct Transform* at);

#endif