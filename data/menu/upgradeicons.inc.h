u64 upgradeicons_upgradeicons_ci4[] = {
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000001100000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000100000, 0x0000000001111000, 0x0000000000000000, 0x0000000000000000, 0x0000000001100000, 0x0000000001111100, 0x0000000000000000, 0x0000000000000000, 
	0x0000000010100000, 0x0000100001111000, 0x0000000000000000, 0x0000000000000000, 0x0000100000100000, 0x0001110001100000, 0x0000000000000000, 0x0000000000000000, 
	0x0000100000100000, 0x0011111001000000, 0x0000000000000000, 0x0000000000000000, 0x0011111000100000, 0x0000100001000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000100000100000, 0x0000100001000000, 0x0000000000000000, 0x0000000000000000, 0x0000100000100000, 0x0000100001000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000100000, 0x0000100001000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000100000, 0x0000100001000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000011111000, 0x0000000001000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000001110000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000012221000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000122122100, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000001222122210, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0111101222122210, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000001222212210, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000122222100, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000012221000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000001110000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	
};

u64 upgradeicons_upgradeicons_ci4_pal_rgba16[] = {
	0x0000464131cf0000
};

Gfx gUseUpgradeIcons[] = {
	gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
	gsSPClearGeometryMode(G_LIGHTING | G_SHADE | G_ZBUFFER),
    gsDPSetTexturePersp(G_TP_NONE),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0),
    gsDPSetTextureFilter(G_TF_POINT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, upgradeicons_upgradeicons_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 2),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, upgradeicons_upgradeicons_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};