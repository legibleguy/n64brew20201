
#ifndef __simplegfx__
#define __simplegfx__

#include <sched.h>
#include "graphics/render_state.h"

#define	SCREEN_HT	240
#define	SCREEN_WD	320
#define GFX_DL_BUF_SIZE	6000

#define	STATIC_SEGMENT		1
#define	MENU_SEGMENT		2
#define CHARACTER_SEGMENT   3
#define LEVEL_SEGMENT   4
#define RDP_OUTPUT_SIZE 0x4000

#ifdef _LANGUAGE_C /* needed because file is included by "spec" */

typedef union {    

    struct {
        short   type;
    } gen;
    
    struct {
        short   type;
    } done;
    
    OSScMsg      app;
    
} GFXMsg;

typedef struct {
    struct RenderState __attribute__((aligned(16))) renderState;
    OSScTask    task;
    GFXMsg      msg;
    u16		*cfb;
} GFXInfo;

/* some static display lists: */
extern Gfx	rdpstateinit_dl[];
extern Gfx	setup_rdpstate[];
extern Gfx	setup_rspstate[];
extern Gfx 	logo_dl[];
extern Gfx 	bg_dl[];

extern char _charactersSegmentRomStart[];
extern char _charactersSegmentRomEnd[];

extern char _level_testSegmentRomStart[];
extern char _level_testSegmentRomEnd[];

extern char _character_animationsSegmentRomStart[];
extern char _character_animationsSegmentStart[];

extern char _menuSegmentRomStart[];
extern char _menuSegmentRomEnd[];

extern char* gStaticSegment;
extern char* gCharacterSegment;
extern char* gLevelSegment;

/* frame buffer, zbuffer: */
extern unsigned short	zbuffer[];

/* yield buffer: */
extern u64	gfxYieldBuf2[];

/* matrix stack buffer: */
extern u64          dram_stack[];

extern void* rdp_output;

#endif	/* _LANGUAGE_C */
#endif /* __simplegfx__ */
