#include "level.h"
#include "../../level_themes/Mars/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Course_01_Grid_001_color[] = {
    {{{-4007, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{-4783, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-4783, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-5780, 524, 12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-5780, 524, 5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{2, 524, 5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{0, 0, 4007}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{4007, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{4783, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-2, 524, 5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{5780, 524, 5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{5780, 524, 12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{4783, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-4783, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{2, 524, -5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{-5780, 524, -5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-5780, 524, -12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-4783, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 0, -4007}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{4783, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{4783, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{5780, 524, -12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{5780, 524, -5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-2, 524, -5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
};


Vtx Course_01_Grid_color[] = {
    {{{4007, 0, -4007}, 0, {-1806, 2830}, {202, 93, 92, 255}}},
    {{{-4007, 0, -4007}, 0, {2830, 2830}, {202, 93, 92, 255}}},
    {{{-4007, 0, 4007}, 0, {2830, -1806}, {202, 93, 92, 255}}},
    {{{4007, 0, 4007}, 0, {-1806, -1806}, {202, 93, 92, 255}}},
};


Gfx Course_01_model_gfx[] = {
    // Material Rock
    gsSPDisplayList(Mars_Rock),
    // End Material Rock
    gsSPVertex(&Course_01_Grid_001_color[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 9, 4, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(18, 21, 22, 0, 23, 18, 22, 0),
    gsSP2Triangles(24, 13, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(0, 27, 28, 0, 0, 28, 29, 0),
    gsSPVertex(&Course_01_Grid_001_color[14], 1, 0),
    gsSPVertex(&Course_01_Grid_001_color[30], 22, 1),
    gsSP2Triangles(1, 2, 3, 0, 4, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 1, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(14, 17, 18, 0, 19, 14, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 8, 0),
    // Material Ground
    gsSPDisplayList(Mars_Ground),
    // End Material Ground
    gsSPVertex(&Course_01_Grid_color[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    // Begin decor
    gsSPDisplayList(Mars_Crate),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 30, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 29, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 26, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 25, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 24, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 23, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 22, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 21, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 20, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 19, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 18, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Metal),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 15, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 9, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 16, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsoleBDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsoleBDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 27, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 28, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 17, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Rock),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 10, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 11, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 12, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 14, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 13, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Course_01_Bases[] = {
    {.position = {-3567.56, -3334.73}, .startingTeam = TEAM(0)},
    {.position = {3002.98, 3734.04}, .startingTeam = TEAM(1)},
    {.position = {3694.97, -3654.04}, .startingTeam = TEAM(2)},
    {.position = {-2463.31, 3685.58}, .startingTeam = TEAM(3)},
    {.position = {1125.61, -1075.93}, .startingTeam = TEAM_NONE},
    {.position = {-134.36, 2137.7}, .startingTeam = TEAM_NONE},
    {.position = {-997.935, -3097.54}, .startingTeam = TEAM_NONE},
    {.position = {3028.31, 911.709}, .startingTeam = TEAM_NONE},
    {.position = {-3580.17, 537.965}, .startingTeam = TEAM_NONE},
};

struct Vector2 Course_01_StartingPositions[] = {
    {-3567.56, -3334.73},
    {3002.98, 3734.04},
    {3694.97, -3654.04},
    {-2463.31, 3685.58},
};

struct SceneBoundary Course_01_Boundary[] = {
    {{0, -4046.9}, {-0, 1}},
    {{4046.9, 0}, {-1, 0}},
    {{0, 4046.9}, {-0, -1}},
    {{-4046.9, 0}, {1, 0}},
};

struct DecorDefinition Course_01_Decor[] = {
    {{-55.3511, 0, 178.636}, {-5.96046e-08, 0, 0, 1}, ROCK004_DECOR_ID},
    {{-2377.09, 0, 158.167}, {-5.96046e-08, 0, 0, 1}, ROCK002_DECOR_ID},
    {{-44.0262, 0, 3788.55}, {-5.96046e-08, 0, 0, 1}, ROCK001_DECOR_ID},
    {{-3141.57, 0, 2351.86}, {-5.96046e-08, 0, 0, 1}, ROCK003_DECOR_ID},
    {{-1202.49, 0, 2457.56}, {2.98023e-08, -0.215582, 0, 0.976486}, CONSOLEB_DECOR_ID},
    {{-1245.17, 0, -3769.88}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-1301.8, 0, -1897.56}, {9.50694e-06, 0.709928, -9.62615e-06, 0.704275}, SEARCHLIGHT_DECOR_ID},
    {{-2629.74, 0, -3599.5}, {2.23517e-08, 0.981608, -1.49012e-07, 0.190909}, DISHBASE_DECOR_ID},
    {{-2156.77, 136.501, -3498.3}, {0.223327, 0.839707, -0.407277, 0.281324}, DISH_DECOR_ID},
    {{178.011, 0, -2693.11}, {0, 0.457917, 1.49012e-08, 0.888995}, BROKEN_BASE_DECOR_ID},
    {{54.1713, 0, -3755.73}, {2.13163e-14, 1, -1.49012e-07, 1.94707e-07}, ROCK001_DECOR_ID},
    {{2167.29, 0, 158.167}, {-5.96046e-08, 0, 0, 1}, ROCK002_DECOR_ID},
    {{-2801.8, 0, -2348.25}, {2.13163e-14, 1, -1.49012e-07, 1.94707e-07}, ROCK003_DECOR_ID},
    {{2903.46, 0, -2150.06}, {0, 0.993914, -1.78814e-07, 0.110159}, ROCK003_DECOR_ID},
    {{2733.57, 0, 2366.02}, {-9.31323e-09, 0.999223, -8.9407e-08, -0.039423}, ROCK003_DECOR_ID},
    {{1423.82, 0, 2247.67}, {-1.49012e-07, -0.0492292, -3.72529e-09, 0.998788}, BROKEN_BASE_DECOR_ID},
    {{1416.55, 0, -3261.85}, {2.98023e-08, -0.531953, 0, 0.846774}, CONSOLEB_DECOR_ID},
    {{1128.48, 0, 1705.39}, {-1.49012e-07, 0.16873, 1.49012e-08, 0.985662}, SEARCHLIGHT_DECOR_ID},
    {{1175.67, 0, -3727.41}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{1770.26, 0, -1249.94}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{1543.75, 0, -980.962}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-1811.45, 0, -1731.28}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-1471.69, 0, -1377.36}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{1345.55, 0, 1340.78}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{1628.69, 0, 1638.08}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-1839.77, 0, 1298.31}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-2094.59, 0, 1553.14}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{2294.18, 136.501, 935.659}, {0.438365, -0.139939, 0.153579, 0.874452}, DISH_DECOR_ID},
    {{2772.56, 0, 664.582}, {-1.11759e-08, 0.994716, -8.9407e-08, -0.102665}, DISHBASE_DECOR_ID},
    {{920.841, 0, 3668.19}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
    {{-1746.33, 0, 3804.09}, {-5.96046e-08, 0, 0, 1}, CRATE_DECOR_ID},
};
struct Vector3 Course_01_PathingNodes[] = {
    {-3620.26, 0.0f, 541.712},
    {-3377, 0.0f, -942.698},
    {1767.38, 0.0f, 3022.29},
    {3014.86, 0.0f, 3680.6},
    {689.61, 0.0f, 650.723},
    {1105.03, 0.0f, -1057.01},
    {-874.243, 0.0f, -817.688},
    {-858.335, 0.0f, 519.896},
    {-10.0695, 0.0f, 2554.31},
    {-2493.31, 0.0f, 3753.16},
    {3690.07, 0.0f, 2413.46},
    {3002.16, 0.0f, 947.349},
    {-2392.38, 0.0f, 1105.58},
    {-84.3656, 0.0f, 2045.09},
    {-3615.09, 0.0f, -3384.53},
    {-971.798, 0.0f, -3086.8},
    {-2165.04, 0.0f, -3020.57},
    {-101.628, 0.0f, -2131.3},
    {3700.9, 0.0f, -3655.94},
    {3537.67, 0.0f, -1306.54},
    {2181.64, 0.0f, -678.409},
    {2895.61, 0.0f, -454.597},
    {2211.61, 0.0f, 1613.07},
    {-2916.35, 0.0f, -3443.34},
};
char Course_01_BasesPathNodes[] = {
    14,
    3,
    18,
    9,
    5,
    13,
    15,
    11,
    0,
};
struct basesDistance Course_01_basePathNodeDistnaces[] = {
    {0, 3, 11617.6}, 
    {0, 5, 9623.93}, 
    {0, 9, 11617.6}, 
    {0, 11, 11617.6}, 
    {0, 13, 11617.6}, 
    {0, 14, 3957.62}, 
    {0, 15, 6716}, 
    {0, 18, 11617.6}, 
    {3, 0, 9985.95}, 
    {3, 5, 7647.06}, 
    {3, 9, 5985.28}, 
    {3, 11, 3055.29}, 
    {3, 13, 20245.5}, 
    {3, 14, 13943.6}, 
    {3, 15, 16702}, 
    {3, 18, 21603.6}, 
    {5, 0, 11003.7}, 
    {5, 3, 11003.7}, 
    {5, 9, 11003.7}, 
    {5, 11, 11003.7}, 
    {5, 13, 11003.7}, 
    {5, 14, 6952.97}, 
    {5, 15, 9711.35}, 
    {5, 18, 4990.75}, 
    {9, 0, 4000.67}, 
    {9, 3, 6457.34}, 
    {9, 5, 13624.6}, 
    {9, 11, 12740.4}, 
    {9, 13, 2953.05}, 
    {9, 14, 7958.29}, 
    {9, 15, 10716.7}, 
    {9, 18, 15618.3}, 
    {11, 0, 15595.5}, 
    {11, 3, 15595.5}, 
    {11, 5, 4591.77}, 
    {11, 9, 15595.5}, 
    {11, 13, 15595.5}, 
    {11, 14, 11544.7}, 
    {11, 15, 14303.1}, 
    {11, 18, 15595.5}, 
    {13, 0, 13490.2}, 
    {13, 3, 3504.29}, 
    {13, 5, 23114.2}, 
    {13, 9, 9489.58}, 
    {13, 11, 25107.9}, 
    {13, 14, 17447.9}, 
    {13, 15, 20206.2}, 
    {13, 18, 25107.9}, 
    {14, 0, 10165.9}, 
    {14, 3, 10165.9}, 
    {14, 5, 5666.31}, 
    {14, 9, 10165.9}, 
    {14, 11, 10165.9}, 
    {14, 13, 10165.9}, 
    {14, 15, 2758.38}, 
    {14, 18, 10165.9}, 
    {15, 0, 11424.2}, 
    {15, 3, 11424.2}, 
    {15, 5, 2907.93}, 
    {15, 9, 11424.2}, 
    {15, 11, 11424.2}, 
    {15, 13, 11424.2}, 
    {15, 14, 9860.9}, 
    {15, 18, 11424.2}, 
    {18, 0, 15423.7}, 
    {18, 3, 15423.7}, 
    {18, 5, 5712.39}, 
    {18, 9, 15423.7}, 
    {18, 11, 15423.7}, 
    {18, 13, 15423.7}, 
    {18, 14, 12665.4}, 
    {18, 15, 15423.7}, 
};
char Course_01_NextNode[] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
    14, 1, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 
    3, 22, 2, 3, 22, 22, 22, 22, 3, 3, 3, 3, 3, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 
    8, 8, 8, 3, 10, 10, 10, 10, 8, 8, 10, 10, 8, 10, 8, 8, 8, 8, 8, 10, 10, 8, 10, 8, 
    5, 5, 13, 13, 4, 5, 5, 5, 13, 13, 5, 5, 5, 13, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
    6, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 20, 20, 20, 20, 20, 6, 6, 
    1, 1, 7, 7, 1, 15, 6, 7, 7, 1, 1, 1, 1, 7, 1, 15, 1, 15, 15, 15, 15, 1, 1, 1, 
    13, 13, 13, 13, 13, 13, 13, 7, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
    9, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 
    12, 12, 13, 13, 13, 12, 12, 12, 13, 9, 13, 13, 12, 13, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
    22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 11, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 
    0, 0, 7, 7, 0, 0, 0, 7, 7, 7, 0, 0, 12, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 13, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
    23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 14, 23, 23, 23, 23, 23, 23, 23, 23, 23, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 15, 17, 17, 17, 17, 17, 17, 17, 17, 
    15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 15, 15, 15, 15, 15, 15, 15, 
    5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 17, 5, 5, 5, 5, 5, 5, 
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 17, 17, 17, 17, 17, 
    18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 19, 18, 18, 18, 18, 
    19, 21, 19, 19, 21, 21, 21, 21, 19, 19, 19, 21, 19, 19, 21, 21, 21, 19, 19, 19, 20, 21, 21, 21, 
    11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 21, 11, 11, 
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 22, 4, 
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 23, 
};
struct LevelDefinition Course_01_Definition = {
    .maxPlayerCount = 4,
    .playerStartLocations = Course_01_StartingPositions,
    .baseCount = 9,
    .decorCount = 31,
    .bases = Course_01_Bases,
    .decor = Course_01_Decor,
    .levelBoundaries = {{-4046.9, -4046.9}, {4046.9, 4046.9}},
    .sceneRender = Course_01_model_gfx,
    .theme = &MarsTheme,
    .staticScene = {Course_01_Boundary, 4},
    .pathfinding = {.nodeCount = 24, .baseNodes = Course_01_BasesPathNodes, .baseDistances = Course_01_basePathNodeDistnaces, .nodePositions = Course_01_PathingNodes, .nextNode = Course_01_NextNode},
};