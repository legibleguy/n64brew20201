#include "level.h"
#include "../../level_themes/Snow/theme.h"
#include "sk64/skelatool_defs.h"
#include <ultra64.h>

Vtx Triple_Threat_Grid_color[] = {
    {{{33, 0, -2044}, 0, {0, 2048}, {158, 216, 237, 255}}},
    {{{-1705, 0, 982}, 0, {0, 2048}, {150, 214, 235, 255}}},
    {{{-17, 0, 28}, 0, {0, 2048}, {157, 216, 236, 255}}},
    {{{1732, 0, 1013}, 0, {0, 2048}, {152, 215, 236, 255}}},
    {{{-4444, 0, 2523}, 0, {0, 2048}, {150, 214, 235, 255}}},
    {{{-3784, 0, 3453}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-1044, 0, 1912}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{4325, 0, 2530}, 0, {0, 2048}, {150, 214, 235, 255}}},
    {{{1121, 0, 1992}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{3749, 0, 3685}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{5306, 0, 1400}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{2466, 0, 59}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{1208, 0, -2093}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{1596, 0, -5240}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{0, 0, -5051}, 0, {0, 2048}, {150, 214, 235, 255}}},
    {{{-1545, 0, -5213}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-1018, 0, -1995}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-2365, 0, 101}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-5017, 0, 1466}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{0, 0, -6918}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-1052, 0, -6869}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{1174, 0, -6966}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{5558, 0, 3305}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{6292, 0, 2351}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{4947, 0, 4284}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-6444, 0, 2382}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-5783, 0, 3263}, 0, {0, 2048}, {255, 255, 255, 255}}},
    {{{-5123, 0, 4193}, 0, {0, 2048}, {255, 255, 255, 255}}},
};


Vtx Triple_Threat_Grid_001_color[] = {
    {{{-6384, 524, 2128}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-3233, 524, -2648}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-4512, 524, -3556}, 0, {1470, 2024}, {175, 193, 204, 255}}},
    {{{-7427, 524, 2050}, 0, {1470, 2024}, {175, 193, 204, 255}}},
    {{{-4437, 0, 3466}, 0, {2357, -10}, {175, 193, 204, 255}}},
    {{{-4613, 524, 4179}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-26, 524, 3747}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{-26, 0, 3092}, 0, {3999, -32}, {175, 193, 204, 255}}},
    {{{5191, 0, 1793}, 0, {-405, 14}, {175, 193, 204, 255}}},
    {{{5267, 0, 2856}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{6043, 524, 3511}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{5904, 524, 1910}, 0, {-205, 1098}, {175, 193, 204, 255}}},
    {{{4211, 524, 4093}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-26, 524, 3747}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{-26, 524, 5959}, 0, {4004, 1992}, {175, 193, 204, 255}}},
    {{{4710, 524, 4790}, 0, {2737, 2008}, {175, 193, 204, 255}}},
    {{{3824, 0, 3438}, 0, {2357, -10}, {175, 193, 204, 255}}},
    {{{-26, 0, 3092}, 0, {3999, -32}, {175, 193, 204, 255}}},
    {{{-26, 524, 3747}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{4211, 524, 4093}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-1314, 524, -6928}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{0, 524, -7416}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{0, 524, -8113}, 0, {4004, 1992}, {175, 193, 204, 255}}},
    {{{-1578, 524, -7713}, 0, {2737, 2008}, {175, 193, 204, 255}}},
    {{{-926, 0, -6273}, 0, {2357, -10}, {175, 193, 204, 255}}},
    {{{0, 0, -6761}, 0, {3999, -32}, {175, 193, 204, 255}}},
    {{{0, 524, -7416}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{-1314, 524, -6928}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{855, 0, -6449}, 0, {1236, -7}, {175, 193, 204, 255}}},
    {{{1180, 524, -6988}, 0, {1235, 1079}, {175, 193, 204, 255}}},
    {{{0, 524, -7416}, 0, {4001, 1073}, {175, 193, 204, 255}}},
    {{{0, 0, -6761}, 0, {3999, -32}, {175, 193, 204, 255}}},
    {{{-6384, 524, 2128}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-6264, 524, 3605}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-5400, 0, 3072}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{-5564, 0, 2189}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{1180, 524, -6988}, 0, {1235, 1079}, {175, 193, 204, 255}}},
    {{{1598, 524, -7608}, 0, {1240, 1988}, {175, 193, 204, 255}}},
    {{{-4613, 524, 4179}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-6264, 524, 3605}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-7354, 524, 4147}, 0, {1470, 2024}, {175, 193, 204, 255}}},
    {{{-4884, 524, 4958}, 0, {2737, 2008}, {175, 193, 204, 255}}},
    {{{5904, 524, 1910}, 0, {-205, 1098}, {175, 193, 204, 255}}},
    {{{6043, 524, 3511}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{7040, 524, 4209}, 0, {1470, 2024}, {175, 193, 204, 255}}},
    {{{6821, 524, 1987}, 0, {-26, 2003}, {175, 193, 204, 255}}},
    {{{3828, 524, -2039}, 0, {-1529, 1085}, {175, 193, 204, 255}}},
    {{{5123, 524, -2793}, 0, {-1523, 1983}, {175, 193, 204, 255}}},
    {{{-3233, 524, -2648}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-6384, 524, 2128}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-5564, 0, 2189}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{-2457, 0, -1993}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{3177, 0, -1617}, 0, {-1526, 16}, {175, 193, 204, 255}}},
    {{{3828, 524, -2039}, 0, {-1529, 1085}, {175, 193, 204, 255}}},
    {{{1180, 524, -6988}, 0, {1235, 1079}, {175, 193, 204, 255}}},
    {{{855, 0, -6449}, 0, {1236, -7}, {175, 193, 204, 255}}},
    {{{-2457, 0, -1993}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{-926, 0, -6273}, 0, {2357, -10}, {175, 193, 204, 255}}},
    {{{-1314, 524, -6928}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-3233, 524, -2648}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{5267, 0, 2856}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{3824, 0, 3438}, 0, {2357, -10}, {175, 193, 204, 255}}},
    {{{4211, 524, 4093}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{6043, 524, 3511}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{3177, 0, -1617}, 0, {-1526, 16}, {175, 193, 204, 255}}},
    {{{5191, 0, 1793}, 0, {-405, 14}, {175, 193, 204, 255}}},
    {{{5904, 524, 1910}, 0, {-205, 1098}, {175, 193, 204, 255}}},
    {{{3828, 524, -2039}, 0, {-1529, 1085}, {175, 193, 204, 255}}},
    {{{-5400, 0, 3072}, 0, {716, 11}, {175, 193, 204, 255}}},
    {{{-6264, 524, 3605}, 0, {1118, 1111}, {175, 193, 204, 255}}},
    {{{-4613, 524, 4179}, 0, {2560, 1092}, {175, 193, 204, 255}}},
    {{{-4437, 0, 3466}, 0, {2357, -10}, {175, 193, 204, 255}}},
};


Gfx Triple_Threat_model_gfx[] = {
    // Material SnowGround
    gsSPDisplayList(Snow_SnowGround),
    // End Material SnowGround
    gsSPVertex(&Triple_Threat_Grid_color[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 1, 3, 0, 1, 4, 5, 0),
    gsSP2Triangles(1, 5, 6, 0, 7, 3, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 3, 1, 6, 0),
    gsSP2Triangles(3, 6, 8, 0, 3, 7, 10, 0),
    gsSP2Triangles(3, 10, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(0, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 0, 0, 4, 1, 17, 0),
    gsSP2Triangles(4, 17, 18, 0, 1, 0, 16, 0),
    gsSP2Triangles(1, 16, 17, 0, 0, 3, 11, 0),
    gsSP2Triangles(0, 11, 12, 0, 14, 19, 20, 0),
    gsSP2Triangles(14, 20, 15, 0, 13, 21, 19, 0),
    gsSP2Triangles(13, 19, 14, 0, 10, 7, 22, 0),
    gsSP2Triangles(10, 22, 23, 0, 7, 9, 24, 0),
    gsSP2Triangles(7, 24, 22, 0, 4, 18, 25, 0),
    gsSP2Triangles(4, 25, 26, 0, 5, 4, 26, 0),
    gsSP2Triangles(5, 26, 27, 0, 15, 18, 17, 0),
    gsSP2Triangles(15, 17, 16, 0, 10, 13, 12, 0),
    gsSP2Triangles(10, 12, 11, 0, 6, 5, 9, 0),
    gsSP1Triangle(6, 9, 8, 0),
    // Material SnowGround
    gsSPDisplayList(Snow_SnowGround),
    // End Material SnowGround
    gsSPVertex(&Triple_Threat_Grid_001_color[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Triple_Threat_Grid_001_color[13], 2, 0),
    gsSPVertex(&Triple_Threat_Grid_001_color[21], 2, 2),
    gsSPVertex(&Triple_Threat_Grid_001_color[32], 28, 4),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 8, 3, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
    gsSP2Triangles(0, 10, 13, 0, 0, 13, 1, 0),
    gsSP2Triangles(18, 19, 9, 0, 18, 9, 8, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Triple_Threat_Grid_001_color[0], 4, 0),
    gsSPVertex(&Triple_Threat_Grid_001_color[12], 1, 4),
    gsSPVertex(&Triple_Threat_Grid_001_color[15], 1, 5),
    gsSPVertex(&Triple_Threat_Grid_001_color[20], 1, 6),
    gsSPVertex(&Triple_Threat_Grid_001_color[23], 1, 7),
    gsSPVertex(&Triple_Threat_Grid_001_color[39], 2, 8),
    gsSPVertex(&Triple_Threat_Grid_001_color[43], 2, 10),
    gsSPVertex(&Triple_Threat_Grid_001_color[60], 12, 12),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(10, 4, 5, 0, 10, 5, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    // Begin decor
    gsSPDisplayList(Snow_Gift),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 3, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_GiftDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 8, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_GiftDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 5, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_PoleDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Snow_House),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 4, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_HouseDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Snow_Snow),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 0, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_Rock001DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 1, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_Rock002DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 2, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_Rock003DisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPDisplayList(Snow_SnowMiscColors),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 6, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_SackDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPMatrix((Mtx*)MATRIX_TRANSFORM_SEGMENT_ADDRESS + 7, G_MTX_MODELVIEW | G_MTX_MUL | G_MTX_PUSH),
    gsSPDisplayList(Snow_SledDisplayList),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
struct BaseDefinition Triple_Threat_Bases[] = {
    {.position = {0, 0}, .startingTeam = TEAM(0)},
    {.position = {0, -5000}, .startingTeam = TEAM(1)},
    {.position = {4330.13, 2500}, .startingTeam = TEAM(2)},
    {.position = {-4330.13, 2500}, .startingTeam = TEAM(3)},
    {.position = {0, -2000}, .startingTeam = TEAM_NONE},
    {.position = {1732.05, 1000}, .startingTeam = TEAM_NONE},
    {.position = {-1732.05, 1000}, .startingTeam = TEAM_NONE},
};

struct Vector2 Triple_Threat_StartingPositions[] = {
    {0, 0},
    {0, -5000},
    {4330.13, 2500},
    {-4330.13, 2500},
};

struct SceneBoundary Triple_Threat_Boundary[] = {
};

struct DecorDefinition Triple_Threat_Decor[] = {
    {{3063.89, 0, -1432.34}, {0, 0.785699, 2.98023e-08, 0.618609}, 1, ROCK001_DECOR_ID},
    {{-1682.76, 0, -2984.65}, {8.9407e-08, 0.10734, -1.11759e-08, 0.994222}, 1, ROCK002_DECOR_ID},
    {{-1451.65, 0, 2822.43}, {-5.96046e-08, -0.127581, 0, 0.991828}, 1, ROCK003_DECOR_ID},
    {{-1540.89, 0, -1638.18}, {1.49012e-07, 0.18655, -7.45058e-09, 0.982445}, 1, GIFT_DECOR_ID},
    {{1455.35, 0, 1967.97}, {-2.08616e-07, 0.597037, 5.96046e-08, 0.802213}, 1, HOUSE_DECOR_ID},
    {{355.397, 0, -167.384}, {0, 0, 0, 1}, 5, POLE_DECOR_ID},
    {{-1357.4, 0, -1425}, {0, 0, 0, 1}, 1, SACK_DECOR_ID},
    {{762.733, 0, 2050.55}, {0, 0, 0, 1}, 1, SLED_DECOR_ID},
    {{-1745.7, 0, -1410.61}, {-2.98023e-08, 0.586421, 2.98023e-08, 0.810006}, 1, GIFT_DECOR_ID},
};
struct Vector3 Triple_Threat_PathingNodes[] = {
    {5.83036, 0.0f, -1990.57},
    {5.83036, 0.0f, 8.45243},
    {-1748.38, 0.0f, 1003.07},
    {1714.25, 0.0f, 1014.45},
    {-4324.96, 0.0f, 2532.03},
    {5.83036, 0.0f, -4997.52},
    {4296.49, 0.0f, 2543.41},
    {1850.16, 0.0f, -1041.14},
    {321.198, 0.0f, 2407.5},
    {-1360.65, 0.0f, 1761.94},
    {-1199.09, 0.0f, -1086.5},
};
char Triple_Threat_BasesPathNodes[] = {
    1,
    5,
    6,
    4,
    0,
    3,
    2,
};
unsigned short Triple_Threat_NodeDistances[] = {
    0, 1999, 3469, 3456, 6288, 3006, 6414, 2074, 6123, 4321, 1506, 
    1999, 0, 2016, 1982, 5012, 5005, 4983, 4042, 4670, 2868, 3505, 
    3469, 2016, 0, 3462, 2996, 6252, 6463, 5522, 2653, 852, 2160, 
    3456, 1982, 3462, 0, 6458, 6425, 3000, 2060, 6116, 4314, 4963, 
    6288, 5012, 2996, 6458, 0, 8874, 8841, 8362, 4864, 3062, 4781, 
    3006, 5005, 6252, 6425, 8874, 0, 8704, 4365, 8906, 7105, 4092, 
    6414, 4983, 6463, 3000, 8841, 8704, 0, 4339, 3977, 5779, 7920, 
    2074, 4042, 5522, 2060, 8362, 4365, 4339, 0, 8176, 6374, 3580, 
    6123, 4670, 2653, 6116, 4864, 8906, 3977, 8176, 0, 1801, 4814, 
    4321, 2868, 852, 4314, 3062, 7105, 5779, 6374, 1801, 0, 3012, 
    1506, 3505, 2160, 4963, 4781, 4092, 7920, 3580, 4814, 3012, 0, 
};
char Triple_Threat_NextNode[] = {
    0, 1, 2, 3, 10, 5, 7, 7, 2, 2, 10, 
    0, 1, 2, 3, 2, 0, 3, 3, 2, 2, 0, 
    0, 1, 2, 3, 4, 10, 3, 3, 9, 9, 10, 
    0, 1, 2, 3, 2, 7, 6, 7, 2, 2, 0, 
    10, 2, 2, 2, 4, 10, 9, 10, 9, 9, 10, 
    0, 0, 10, 7, 10, 5, 7, 7, 10, 10, 10, 
    7, 3, 3, 3, 8, 7, 6, 7, 8, 8, 7, 
    0, 3, 3, 3, 0, 5, 6, 7, 3, 3, 0, 
    9, 9, 9, 9, 9, 9, 6, 9, 8, 9, 9, 
    2, 2, 2, 2, 4, 2, 8, 2, 8, 9, 2, 
    0, 0, 2, 0, 4, 5, 0, 0, 2, 2, 10, 
};
struct LevelDefinition Triple_Threat_Definition = {
    .maxPlayerCount = 4,
    .playerStartLocations = Triple_Threat_StartingPositions,
    .baseCount = 7,
    .decorCount = 9,
    .bases = Triple_Threat_Bases,
    .decor = Triple_Threat_Decor,
    .levelBoundaries = {{-4330.13, -5000}, {4330.13, 2500}},
    .sceneRender = Triple_Threat_model_gfx,
    .theme = &SnowTheme,
    .staticScene = {Triple_Threat_Boundary, 0},
    .pathfinding = {.nodeCount = 11, .baseNodes = Triple_Threat_BasesPathNodes, .nodeDistances = Triple_Threat_NodeDistances, .nodePositions = Triple_Threat_PathingNodes, .nextNode = Triple_Threat_NextNode},
    .aiDifficulty = 1,
};

