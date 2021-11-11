#ifndef _GRAPHICS_IMAGE_H
#define _GRAPHICS_IMAGE_H

#include "render_state.h"
#include "math/color.h"

void graphicsCopyImage(struct RenderState* state, void* source, int iw, int ih, int sx, int sy, int dx, int dy, int width, int height, struct Coloru8 color);

#endif