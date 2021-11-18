#include "level.h"
#include "../../level_themes/Mars/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Sojourner_Grid_001_color[] = {
    {{{8979, 0, -2003}, 0, {-202, 7}, {203, 96, 95, 255}}},
    {{{9755, 524, -2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{9755, 524, -2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{9755, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{10752, 524, -12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{10752, 524, -2686}, 0, {-13, 1001}, {203, 96, 95, 255}}},
    {{{4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{0, 0, -4007}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{-7903, 0, -1445}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{-4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-8679, 524, -1442}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{2, 524, -5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{-5780, 524, -5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-9676, 524, -1457}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-8679, 524, -1442}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-4007, 0, -4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{8979, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{9755, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-2, 524, 5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{5780, 524, 5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{10752, 524, 12}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{9755, 524, -2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{0, 0, 4007}, 0, {1999, -16}, {202, 92, 91, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-9397, 0, 2003}, 0, {-202, 7}, {203, 96, 95, 255}}},
    {{{-10172, 524, 2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-10172, 524, 2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{-8679, 524, -1447}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-9676, 524, -1432}, 0, {-761, 991}, {203, 98, 97, 255}}},
    {{{-11170, 524, 2686}, 0, {-13, 1001}, {203, 96, 95, 255}}},
    {{{-4007, 0, 4007}, 0, {358, 5}, {202, 93, 92, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{-7903, 0, -1445}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{-8679, 524, -1447}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{-10172, 524, 2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{-9397, 0, 2003}, 0, {-202, 7}, {203, 96, 95, 255}}},
    {{{-4783, 524, 4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{-5780, 524, 5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{2, 524, 5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, 4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
    {{{8979, 0, 0}, 0, {-763, 8}, {203, 98, 97, 255}}},
    {{{9755, 524, 2}, 0, {-764, 542}, {203, 98, 97, 255}}},
    {{{9755, 524, -2330}, 0, {-102, 549}, {203, 96, 95, 255}}},
    {{{8979, 0, -2003}, 0, {-202, 7}, {203, 96, 95, 255}}},
    {{{4783, 524, -4662}, 0, {559, 555}, {202, 93, 92, 255}}},
    {{{5780, 524, -5360}, 0, {735, 1012}, {202, 93, 92, 255}}},
    {{{-2, 524, -5360}, 0, {2002, 996}, {202, 92, 91, 255}}},
    {{{0, 524, -4662}, 0, {2000, 536}, {202, 92, 91, 255}}},
};


Vtx Sojourner_Grid_color[] = {
    {{{4507, 0, -2003}, 0, {1186, -982}, {234, 149, 84, 255}}},
    {{{9198, 0, -2003}, 0, {2270, -1392}, {212, 112, 90, 255}}},
    {{{9198, 0, -4007}, 0, {1861, -2476}, {202, 93, 92, 255}}},
    {{{4507, 0, -4007}, 0, {776, -2066}, {202, 93, 92, 255}}},
    {{{-9564, 0, -2003}, 0, {-2066, 247}, {203, 94, 92, 255}}},
    {{{-4874, 0, -2003}, 0, {-982, -162}, {245, 166, 80, 255}}},
    {{{-4874, 0, -4007}, 0, {-1392, -1246}, {205, 99, 91, 255}}},
    {{{-9564, 0, -4007}, 0, {-2476, -837}, {250, 173, 79, 255}}},
    {{{-183, 0, -2003}, 0, {102, -572}, {223, 132, 87, 255}}},
    {{{-183, 0, -4007}, 0, {-307, -1656}, {202, 93, 92, 255}}},
    {{{-9564, 0, 4007}, 0, {-837, 3500}, {202, 93, 92, 255}}},
    {{{-4874, 0, 4007}, 0, {247, 3090}, {202, 93, 92, 255}}},
    {{{-4874, 0, 2003}, 0, {-162, 2006}, {220, 127, 88, 255}}},
    {{{-9564, 0, 2003}, 0, {-1246, 2416}, {202, 93, 92, 255}}},
    {{{-4874, 0, 0}, 0, {-572, 921}, {202, 93, 92, 255}}},
    {{{-9564, 0, 0}, 0, {-1656, 1331}, {202, 93, 92, 255}}},
    {{{-183, 0, 4007}, 0, {1331, 2680}, {255, 179, 77, 255}}},
    {{{-183, 0, 2003}, 0, {921, 1596}, {214, 116, 89, 255}}},
    {{{-183, 0, 0}, 0, {511, 512}, {202, 93, 92, 255}}},
    {{{4507, 0, 4007}, 0, {2416, 2270}, {215, 119, 89, 255}}},
    {{{4507, 0, 2003}, 0, {2006, 1186}, {205, 97, 92, 255}}},
    {{{4507, 0, 0}, 0, {1596, 102}, {202, 93, 92, 255}}},
    {{{9198, 0, 4007}, 0, {3500, 1861}, {239, 157, 82, 255}}},
    {{{9198, 0, 2003}, 0, {3090, 776}, {206, 102, 91, 255}}},
    {{{9198, 0, 0}, 0, {2680, -307}, {203, 97, 92, 255}}},
};


Gfx Sojourner_model_gfx[] = {
    // Material Rock
    gsSPDisplayList(Mars_Rock),
    // End Material Rock
    gsSPVertex(&Sojourner_Grid_001_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 21, 16, 20, 0),
    gsSP2Triangles(22, 11, 23, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&Sojourner_Grid_001_color[29], 1, 0),
    gsSPVertex(&Sojourner_Grid_001_color[31], 31, 1),
    gsSP2Triangles(2, 0, 1, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 6, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 13, 16, 0),
    gsSP2Triangles(25, 24, 16, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&Sojourner_Grid_001_color[4], 1, 0),
    gsSPVertex(&Sojourner_Grid_001_color[7], 1, 1),
    gsSPVertex(&Sojourner_Grid_001_color[62], 4, 2),
    gsSP2Triangles(2, 0, 1, 0, 3, 2, 1, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 2, 4, 0),
    // Material Ground
    gsSPDisplayList(Mars_Ground),
    // End Material Ground
    gsSPVertex(&Sojourner_Grid_color[0], 25, 0),
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
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 15, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 30, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 31, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 32, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 33, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 34, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 35, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 36, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 38, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 37, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_CrateDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Metal),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Broken_BaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 29, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 28, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_ConsolesDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 22, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 24, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 25, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 23, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_DishBaseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 27, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 26, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_SearchlightDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Mars_Rock),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 9, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 11, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 10, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 14, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 13, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 12, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 19, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 21, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 20, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 18, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 17, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 16, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Mars_Rock004DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Sojourner_Bases[] = {
    {.position = {0, 6451.46}, .startingTeam = TEAM(0)},
    {.position = {568.046, -6639.03}, .startingTeam = TEAM(1)},
    {.position = {5786.97, 1222.49}, .startingTeam = TEAM(2)},
    {.position = {-5928.98, -775.731}, .startingTeam = TEAM(3)},
    {.position = {602.762, -616.369}, .startingTeam = TEAM_NONE},
    {.position = {8441.54, -1763.28}, .startingTeam = TEAM_NONE},
    {.position = {-4985.15, 5157.87}, .startingTeam = TEAM_NONE},
    {.position = {48.0739, 2434.68}, .startingTeam = TEAM_NONE},
    {.position = {-5199.97, -4293.01}, .startingTeam = TEAM_NONE},
};

struct Vector2 Sojourner_StartingPositions[] = {
    {0, 6451.46},
    {568.046, -6639.03},
    {5786.97, 1222.49},
    {-5928.98, -775.731},
};

struct SceneBoundary Sojourner_Boundary[] = {
    {{0, -7743.49}, {-0, 1}},
    {{6747.5, -5807.62}, {-0.582607, 0.812754}},
    {{8723.25, -560.136}, {-0.976873, -0.213819}},
    {{6022.65, 5247.48}, {-0.784085, -0.620653}},
    {{0, 7743.49}, {-0, -1}},
    {{-6513.91, 5807.62}, {0.61733, -0.786704}},
    {{-8980.92, 1935.87}, {1, 0}},
    {{-6513.91, -3871.74}, {0.843349, 0.537367}},
};

struct DecorDefinition Sojourner_Decor[] = {
    {{2164.31, 0, 3538.44}, {0, -1, 0, -4.37114e-08}, ROCK004_DECOR_ID},
    {{106.5, 0, 1559.95}, {0, -1, 0, -4.37114e-08}, ROCK002_DECOR_ID},
    {{-3816.57, 0, -7237.64}, {-1.78814e-07, 0.187129, 6.56846e-09, 0.982335}, ROCK001_DECOR_ID},
    {{-2654.83, 0, -194.476}, {0, -1, 0, -4.37114e-08}, ROCK003_DECOR_ID},
    {{3430.01, 0, -146.137}, {0, -1, 0, -4.37114e-08}, BROKEN_BASE_DECOR_ID},
    {{-367.353, 0, -1733.04}, {5.96046e-08, 0.175042, -8.33477e-10, 0.984561}, CONSOLES_DECOR_ID},
    {{4729.18, -15.7789, -3628.38}, {0.187961, -0.860551, -0.424759, -0.209053}, DISH_DECOR_ID},
    {{3897.9, 0, -3330.26}, {0, -1, 0, -4.37114e-08}, DISHBASE_DECOR_ID},
    {{3810.17, 0, -4933.59}, {-1.49012e-08, -0.982796, -8.53704e-08, 0.184693}, SEARCHLIGHT_DECOR_ID},
    {{4207.08, 0, -7237.64}, {0, -0.237635, -1.12211e-09, 0.971355}, ROCK001_DECOR_ID},
    {{8579.28, 0, -3714.13}, {-1.49012e-07, -0.489994, -5.54536e-08, 0.871726}, ROCK001_DECOR_ID},
    {{7407.68, 0, 2250.35}, {4.47035e-08, -0.87474, 7.01957e-08, 0.484592}, ROCK001_DECOR_ID},
    {{4212.43, 0, 6972.23}, {-1.49012e-08, -0.985658, -1.15521e-07, 0.168755}, ROCK001_DECOR_ID},
    {{-3917.73, 0, 6972.23}, {0.168755, -8.9407e-08, -0.985658, -1.49012e-08}, ROCK001_DECOR_ID},
    {{-7787.54, 0, 1682.31}, {0.68377, 5.96046e-07, -0.729698, 5.36442e-07}, ROCK001_DECOR_ID},
    {{1286.57, -60.0174, -3600}, {-0.0286667, -0.9853, 0.0509718, 0.160512}, CRATE_DECOR_ID},
    {{-1632.53, 0, 3538.44}, {0, -1, 0, -4.37114e-08}, ROCK004_DECOR_ID},
    {{-1632.53, 0, -5214}, {0, -1, 0, -4.37114e-08}, ROCK004_DECOR_ID},
    {{2287.58, 0, -5214}, {0, -1, 0, -4.37114e-08}, ROCK004_DECOR_ID},
    {{5678.48, 0, -1300}, {0, -0.924728, 2.14834e-08, -0.380628}, ROCK002_DECOR_ID},
    {{-4799.8, 0, -2902.56}, {-5.96046e-08, 0.323481, 3.55818e-08, 0.946235}, ROCK002_DECOR_ID},
    {{106.5, 0, -3124.45}, {0, -1, 0, -4.37114e-08}, ROCK002_DECOR_ID},
    {{5015.37, 146.481, 4020.05}, {-0.459762, 0.279485, 0.0660984, 0.84032}, DISH_DECOR_ID},
    {{4909.38, 0, 3143.3}, {-1.49012e-07, 0.623628, 1.36294e-07, 0.781721}, DISHBASE_DECOR_ID},
    {{-4703.54, 181.723, 3941.13}, {-0.393794, -0.329035, -0.246325, 0.822184}, DISH_DECOR_ID},
    {{-4867.85, 0, 4244.57}, {1.19209e-07, -0.141883, 6.73343e-09, 0.989883}, DISHBASE_DECOR_ID},
    {{3810.17, 0, -298.494}, {0, -0.870114, -1.07716e-08, -0.492851}, SEARCHLIGHT_DECOR_ID},
    {{-5040.89, 0, -101.255}, {0, -0.870114, -1.07716e-08, -0.492851}, SEARCHLIGHT_DECOR_ID},
    {{-3621.78, 0, -4099.9}, {-8.9407e-08, -0.865494, 1.97668e-07, -0.50092}, CONSOLES_DECOR_ID},
    {{-3763.83, 0, 2038.49}, {1.49012e-08, -0.952995, -3.64243e-08, -0.302986}, CONSOLES_DECOR_ID},
    {{2240.05, -25.934, -3600}, {-0.0206911, -0.976876, 0.00450647, 0.212756}, CRATE_DECOR_ID},
    {{2240.05, -46.9385, -2708.71}, {0.00561516, -0.901142, -0.042565, 0.431392}, CRATE_DECOR_ID},
    {{1215.24, -90.5504, -2516.13}, {-0.202729, -0.833414, 0.121517, 0.499555}, CRATE_DECOR_ID},
    {{1949.98, -60.2558, -3238.25}, {0.0856065, -0.924097, -0.00435005, -0.37242}, CRATE_DECOR_ID},
    {{-850.609, -60.0174, 4216.32}, {-0.0286667, -0.9853, 0.0509718, 0.160512}, CRATE_DECOR_ID},
    {{102.88, -25.934, 4216.32}, {-0.0206911, -0.976876, 0.00450647, 0.212756}, CRATE_DECOR_ID},
    {{102.88, -46.9385, 5107.62}, {0.00561516, -0.901142, -0.042565, 0.431392}, CRATE_DECOR_ID},
    {{-921.939, -90.5504, 5300.19}, {-0.202729, -0.833414, 0.121517, 0.499555}, CRATE_DECOR_ID},
    {{-187.197, -60.2558, 4578.08}, {0.0856065, -0.924097, -0.00435005, -0.37242}, CRATE_DECOR_ID},
};
struct Vector3 Sojourner_PathingNodes[] = {
};
char Sojourner_BasesPathNodes[] = {
};
struct basesDistance Sojourner_basePathNodeDistnaces[] = {
};
char Sojourner_NextNode[] = {
};
struct LevelDefinition Sojourner_Definition = {
    .maxPlayerCount = 4,
    .playerStartLocations = Sojourner_StartingPositions,
    .baseCount = 9,
    .decorCount = 39,
    .bases = Sojourner_Bases,
    .decor = Sojourner_Decor,
    .levelBoundaries = {{-8980.92, -7743.49}, {9448.1, 7743.49}},
    .sceneRender = Sojourner_model_gfx,
    .theme = &MarsTheme,
    .staticScene = {Sojourner_Boundary, 8},
    .pathfinding = {.nodeCount = 0, .baseNodes = Sojourner_BasesPathNodes, .baseDistances = Sojourner_basePathNodeDistnaces, .nodePositions = Sojourner_PathingNodes, .nextNode = Sojourner_NextNode},
};

