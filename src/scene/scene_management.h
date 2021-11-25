#ifndef _SCENE_MANAGEMENT_H
#define _SCENE_MANAGEMENT_H

#include "level_scene.h"
#include "levels/levels.h"
#include "menu/mainmenu.h"
#include "menu/credits.h"
#include "graphics/render_state.h"

enum SceneState {
    SceneStateNone,
    SceneStateInLevel,
    SceneStateInMainMenu,
    SceneStateInCredits,
};

struct GameConfiguration {
    unsigned char playerCount;
    unsigned char humanPlayerCount;
    struct LevelMetadata* level;
};

extern enum SceneState gSceneState;
extern struct LevelScene gCurrentLevel;
extern struct MainMenu gMainMenu;
extern struct Credits gCredits;
extern char     _heapStart[];

int sceneIsLoading();

void sceneLoadLevel(struct GameConfiguration* gameConfig);
void sceneQueueLoadLevel(struct GameConfiguration* gameConfig);
void sceneQueueMainMenu();
void sceneQueuePostGameScreen(unsigned winningTeam, unsigned teamCount, float time);
void sceneQueueCredits();

void sceneUpdate(int readyForSceneSwitch);
void sceneRender(struct RenderState* renderState);

#endif