#include "level.h"
#include "../../level_themes/Mars/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Sojourner_2_Grid_001_color[] = {
    {{{-6222, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{-7426, 524, -3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-6222, 0, 5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-7426, 524, -3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-8975, 524, 15}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-8975, 524, 6961}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{4, 524, 6961}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, 6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-6222, 0, 5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{0, 0, 5205}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{6222, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{6222, 0, 5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{7426, 524, -3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-4, 524, 6961}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{8975, 524, 6961}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{8975, 524, 15}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{7426, 524, -3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{6222, 0, 5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 524, 6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{7426, 524, 6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-6222, 0, -5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-7426, 524, 3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{4, 524, -6961}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{-8975, 524, -6961}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-8975, 524, -15}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-7426, 524, 3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-6222, 0, -5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 0, -5205}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{0, 524, -6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{7426, 524, 3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{6222, 0, -5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{7426, 524, 3}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{8975, 524, -15}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{8975, 524, -6961}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-4, 524, -6961}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, -6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{6222, 0, -5205}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{7426, 524, -6056}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -6056}, 0, {2000, 536}, {202, 92, 91, 255}}},
};


Vtx Sojourner_2_Grid_color[] = {
    {{{-3217, 0, 2719}, 0, {1028, -1311}, {255, 213, 111, 255}}},
    {{{-6434, 0, 2719}, 0, {2198, -1965}, {202, 93, 92, 255}}},
    {{{-6434, 0, 5439}, 0, {1544, -3135}, {202, 93, 92, 255}}},
    {{{-3217, 0, 5439}, 0, {374, -2481}, {202, 93, 92, 255}}},
    {{{6434, 0, 2719}, 0, {-2481, 649}, {202, 93, 92, 255}}},
    {{{3217, 0, 2719}, 0, {-1311, -4}, {240, 185, 106, 255}}},
    {{{3217, 0, 5439}, 0, {-1965, -1174}, {202, 93, 92, 255}}},
    {{{6434, 0, 5439}, 0, {-3135, -520}, {202, 93, 92, 255}}},
    {{{0, 0, 2719}, 0, {-141, -657}, {202, 93, 92, 255}}},
    {{{0, 0, 5439}, 0, {-795, -1827}, {202, 93, 92, 255}}},
    {{{6434, 0, -5439}, 0, {-520, 4159}, {202, 93, 92, 255}}},
    {{{3217, 0, -5439}, 0, {649, 3505}, {202, 93, 92, 255}}},
    {{{3217, 0, -2719}, 0, {-4, 2335}, {202, 93, 92, 255}}},
    {{{6434, 0, -2719}, 0, {-1174, 2989}, {202, 93, 92, 255}}},
    {{{3217, 0, 0}, 0, {-657, 1165}, {202, 93, 92, 255}}},
    {{{6434, 0, 0}, 0, {-1827, 1819}, {202, 93, 92, 255}}},
    {{{0, 0, -5439}, 0, {1819, 2851}, {202, 93, 92, 255}}},
    {{{0, 0, -2719}, 0, {1165, 1681}, {248, 200, 108, 255}}},
    {{{0, 0, 0}, 0, {512, 512}, {202, 93, 92, 255}}},
    {{{-3217, 0, -5439}, 0, {2989, 2198}, {202, 93, 92, 255}}},
    {{{-3217, 0, -2719}, 0, {2335, 1028}, {204, 98, 93, 255}}},
    {{{-3217, 0, 0}, 0, {1681, -141}, {202, 93, 92, 255}}},
    {{{-6434, 0, -5439}, 0, {4159, 1544}, {202, 95, 92, 255}}},
    {{{-6434, 0, -2719}, 0, {3505, 374}, {202, 95, 92, 255}}},
    {{{-6434, 0, 0}, 0, {2851, -795}, {202, 93, 92, 255}}},
};


Gfx Sojourner_2_model_gfx[] = {
    // Material Rock
    gsSPDisplayList(Mars_Rock),
    // End Material Rock
    gsSPVertex(&Sojourner_2_Grid_001_color[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 9, 4, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(18, 21, 22, 0, 23, 18, 22, 0),
    gsSP2Triangles(24, 13, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(0, 27, 28, 0, 0, 28, 29, 0),
    gsSPVertex(&Sojourner_2_Grid_001_color[14], 1, 0),
    gsSPVertex(&Sojourner_2_Grid_001_color[30], 22, 1),
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
    gsSPVertex(&Sojourner_2_Grid_color[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 5, 0, 15, 5, 4, 0),
    gsSP2Triangles(11, 16, 17, 0, 11, 17, 12, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 14, 0),
    gsSP2Triangles(14, 18, 8, 0, 14, 8, 5, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(18, 21, 0, 0, 18, 0, 8, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(21, 24, 1, 0, 21, 1, 0, 0),
    // Begin decor
    gsSPDisplayList(Mars_Crate),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 27, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 26, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 25, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 24, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 23, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 28, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 33, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 32, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 31, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 30, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 29, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Metal),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 14, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 15, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 16, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 17, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 19, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 21, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 18, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 20, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 22, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 34, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 36, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 35, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Rock),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 10, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 9, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 13, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 12, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 11, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Sojourner_2_Bases[] = {
    {.position = {-2487.55, -189.885}, .startingTeam = TEAM(0)},
    {.position = {0, -1912.42}, .startingTeam = TEAM(1)},
    {.position = {125.768, 1292.99}, .startingTeam = TEAM(2)},
    {.position = {2674.27, -369.874}, .startingTeam = TEAM(3)},
    {.position = {5681.64, 3155.81}, .startingTeam = TEAM_NONE},
    {.position = {5681.64, -3303.74}, .startingTeam = TEAM_NONE},
    {.position = {-5708.86, 3155.81}, .startingTeam = TEAM_NONE},
    {.position = {-5708.86, -3303.74}, .startingTeam = TEAM_NONE},
    {.position = {997.238, -4413.2}, .startingTeam = TEAM_NONE},
    {.position = {-457.393, 4289.93}, .startingTeam = TEAM_NONE},
    {.position = {35.7019, -320.512}, .startingTeam = TEAM_NONE},
};

struct Vector2 Sojourner_2_StartingPositions[] = {
    {-2487.55, -189.885},
    {0, -1912.42},
    {125.768, 1292.99},
    {2674.27, -369.874},
};

struct SceneBoundary Sojourner_2_Boundary[] = {
    {{0, -5256.37}, {-0, 1}},
    {{6283.56, 0}, {-1, 0}},
    {{0, 5256.37}, {-0, -1}},
    {{-6283.56, 0}, {1, 0}},
};

struct DecorDefinition Sojourner_2_Decor[] = {
    {{5858.53, 0, -4635.33}, {2.98023e-08, 0.885195, 5.96046e-08, 0.465219}, ROCK001_DECOR_ID},
    {{3483.19, 0, -184.614}, {0, 0, 0, 1}, ROCK003_DECOR_ID},
    {{-1500, -25.934, -3600}, {-8.9407e-08, 1.86265e-09, -0.0211762, 0.999776}, CRATE_DECOR_ID},
    {{1901.04, 0, -4300.97}, {0, 0, 0, 1}, BROKEN_BASE_DECOR_ID},
    {{-1053.37, 0, -729.333}, {-5.96046e-06, 0.709412, -6.02007e-06, -0.704794}, CONSOLES_DECOR_ID},
    {{1700.87, -15.7789, -2054.32}, {0.424759, -0.209053, 0.187961, 0.860551}, DISH_DECOR_ID},
    {{1868.34, 13.3598, -2465.25}, {0, 0, 0, 1}, DISHBASE_DECOR_ID},
    {{-1589.22, 0, -3059.83}, {-2.98023e-08, -0.596246, -8.9407e-08, 0.802802}, SEARCHLIGHT_DECOR_ID},
    {{5821.7, 0, 4565.69}, {0.885195, -1.49012e-08, -0.46522, -8.9407e-08}, ROCK001_DECOR_ID},
    {{-5926.44, 0, -4635.33}, {-0.465219, 1.19209e-07, -0.885195, -4.47035e-08}, ROCK001_DECOR_ID},
    {{-5926.44, 0, 4486.93}, {0, -0.465219, -1.49012e-08, 0.885195}, ROCK001_DECOR_ID},
    {{-3380.7, 0, -184.614}, {0, 0, 0, 1}, ROCK003_DECOR_ID},
    {{199.174, 0, -2669.81}, {2.98023e-08, 0.707107, -8.9407e-08, 0.707107}, ROCK003_DECOR_ID},
    {{199.174, 0, 2211.83}, {0.707107, -8.9407e-08, 0.707107, 2.98023e-08}, ROCK003_DECOR_ID},
    {{-2048.21, 0, 3126.99}, {0, 0, 0, 1}, BROKEN_BASE_DECOR_ID},
    {{-5414.94, 0, -2190.3}, {0.299574, 1.49012e-07, -0.954073, 2.98023e-08}, CONSOLES_DECOR_ID},
    {{5316.34, 0, 1871.48}, {-1.49012e-08, 0.938312, -8.9407e-08, -0.345789}, CONSOLES_DECOR_ID},
    {{2107.44, -15.7789, 1964.69}, {-0.0873892, 0.826427, -0.456194, -0.318228}, DISH_DECOR_ID},
    {{2433.33, 13.3598, 2265.86}, {0, 0.822003, 2.98023e-08, -0.569484}, DISHBASE_DECOR_ID},
    {{-5014.72, -15.7789, 2101.25}, {-0.120424, 0.80102, -0.448607, -0.377646}, DISH_DECOR_ID},
    {{-4648.5, 13.3598, 2351.82}, {-5.96046e-08, 0.778286, -5.96046e-08, -0.627911}, DISHBASE_DECOR_ID},
    {{4927.22, -15.7789, -2080.76}, {-0.120424, 0.80102, -0.448607, -0.377646}, DISH_DECOR_ID},
    {{5293.44, 13.3598, -1830.2}, {-5.96046e-08, 0.778286, -5.96046e-08, -0.627911}, DISHBASE_DECOR_ID},
    {{-1678.18, -100.308, -2968.94}, {0.317856, 0.0630766, 0.185057, 0.927762}, CRATE_DECOR_ID},
    {{-2448.91, -61.3504, -3124.76}, {-0.177569, 0.0155567, -0.0858776, 0.980231}, CRATE_DECOR_ID},
    {{-2014.01, -26.032, 1409.58}, {-0.0559831, 0.032488, 0.0073719, 0.997876}, CRATE_DECOR_ID},
    {{-2192.19, -60.5534, 2040.64}, {0.133745, -0.398928, 0.10708, 0.900834}, CRATE_DECOR_ID},
    {{-2962.92, -37.907, 1884.82}, {-0.0766125, -0.172187, -0.0357999, 0.981428}, CRATE_DECOR_ID},
    {{2913.78, 0, 3600.28}, {0, 0, 0, 1}, CRATE_DECOR_ID},
    {{2735.6, 0, 4231.34}, {-8.9407e-08, -0.359652, 0, 0.933086}, CRATE_DECOR_ID},
    {{1964.87, 0, 4075.52}, {-2.98023e-08, 0.226633, 0, 0.97398}, CRATE_DECOR_ID},
    {{3820.03, 0, -2511.25}, {-1.19209e-07, -0.48333, -2.98023e-08, 0.875438}, CRATE_DECOR_ID},
    {{3641.86, 0, -1880.19}, {5.96046e-08, -0.2444, 7.45058e-09, 0.969675}, CRATE_DECOR_ID},
    {{2871.12, 0, -2036.01}, {-1.78814e-07, 0.450819, 7.45058e-08, 0.892616}, CRATE_DECOR_ID},
    {{-1589.22, 0, 2159.19}, {-2.98023e-08, -0.181135, 7.45058e-09, 0.983458}, SEARCHLIGHT_DECOR_ID},
    {{3523, 0, -3059.83}, {8.9407e-08, 0.489277, 0, 0.872128}, SEARCHLIGHT_DECOR_ID},
    {{2182.42, 0, 3529.4}, {8.9407e-08, 0.489277, 0, 0.872128}, SEARCHLIGHT_DECOR_ID},
};
struct Vector3 Sojourner_2_PathingNodes[] = {
};
char Sojourner_2_BasesPathNodes[] = {
};
struct basesDistance Sojourner_2_basePathNodeDistnaces[] = {
};
char Sojourner_2_NextNode[] = {
};
struct LevelDefinition Sojourner_2_Definition = {
    .maxPlayerCount = 4,
    .playerStartLocations = Sojourner_2_StartingPositions,
    .baseCount = 11,
    .decorCount = 37,
    .bases = Sojourner_2_Bases,
    .decor = Sojourner_2_Decor,
    .levelBoundaries = {{-6283.56, -5256.37}, {6283.56, 5256.37}},
    .sceneRender = Sojourner_2_model_gfx,
    .theme = &MarsTheme,
    .staticScene = {Sojourner_2_Boundary, 4},
    .pathfinding = {.nodeCount = 0, .baseNodes = Sojourner_2_BasesPathNodes, .baseDistances = Sojourner_2_basePathNodeDistnaces, .nodePositions = Sojourner_2_PathingNodes, .nextNode = Sojourner_2_NextNode},
};

