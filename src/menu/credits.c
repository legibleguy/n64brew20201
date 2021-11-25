#include "credits.h"
#include "kickflipfont.h"
#include "graphics/spritefont.h"
#include "graphics/image.h"
#include "graphics/gfx.h"

#include "../data/fonts/fonts.h"

Gfx gCreditsSolidColor[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_LIGHTING | G_SHADE),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetCombineLERP(0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsSPEndDisplayList(),
};

void creditsInit(struct Credits* credits) {
    initKickflipFont();
}

void creditsUpdate(struct Credits* credits) {

}

void creditsRender(struct Credits* credits, struct RenderState* renderState) {
    spriteSetLayer(renderState, LAYER_SOLID_COLOR, gCreditsSolidColor);
    spriteSetLayer(renderState, LAYER_KICKFLIP_NUMBERS_FONT, gUseKickflipNumbersFont);
    spriteSetLayer(renderState, LAYER_KICKFLIP_FONT, gUseKickflipFont);

    char* message = "Hello World!";
    unsigned messageX = (SCREEN_WD - fontMeasure(&gKickflipFont, message, 0)) >> 1; 
    fontRenderText(renderState, &gKickflipFont, message, messageX, 104, 0);

    spriteFinish(renderState);
}