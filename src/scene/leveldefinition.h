#ifndef _LEVEL_DEFINITION_H
#define _LEVEL_DEFINITION_H

#include <ultra64.h>
#include "math/vector2.h"
#include "math/box2d.h"
#include "math/quaternion.h"
#include "collision/staticscene.h"

#define TEAM(index) (index)
#define TEAM_NONE   4

struct ThemeDefinition;

enum LevelMetadataFlags {
    LevelMetadataFlagsCampaign = (1 << 0),
    LevelMetadataFlagsMultiplayer = (1 << 1),
    LevelMetadataFlagsUnlocked = (1 << 2),
    LevelMetadataFlagsTutorial = (1 << 3),
    LevelMetadataFlagsDisallowUpgrade = (1 << 4),
};

struct BaseDefinition {
    struct Vector2 position;
    unsigned char startingTeam;
};

struct DecorDefinition {
    struct Vector3 position;
    struct Quaternion rotation;
    float scale;
    unsigned decorID;
};

struct PathfindingDefinition {
    unsigned short nodeCount;
    struct Vector3* nodePositions;
    char* baseNodes;
    unsigned short* nodeDistances;
    char *nextNode;
};

struct LevelDefinition {
    unsigned int maxPlayerCount;
    struct Vector2* playerStartLocations;
    unsigned short baseCount;
    unsigned short decorCount;
    struct BaseDefinition* bases;
    struct DecorDefinition* decor;
    struct Box2D levelBoundaries;
    Gfx* sceneRender;
    struct ThemeDefinition* theme;
    struct StaticScene staticScene;
    struct PathfindingDefinition pathfinding;
    float aiDifficulty;
};

struct LevelDefinition* levelDefinitionUnpack(struct LevelDefinition* addressPtr, void* segmentRamStart, void* themeSegmentStart);

#endif