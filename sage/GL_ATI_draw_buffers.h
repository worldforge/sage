// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_draw_buffers
#define GL_ATI_draw_buffers 1

#include <GL/gl.h>

static const char * const str_GL_ATI_draw_buffers = "GL_ATI_draw_buffers";
static int GL_ATI_draw_buffers_initialised = 0;

typedef void (*PFNGLDRAWBUFFERSATIPROC)(GLsizei n, const GLenum *bufs);
static PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI = 0;

#define GL_MAX_DRAW_BUFFERS_ATI                    0x8824
#define GL_DRAW_BUFFER0_ATI                        0x8825
#define GL_DRAW_BUFFER1_ATI                        0x8826
#define GL_DRAW_BUFFER2_ATI                        0x8827
#define GL_DRAW_BUFFER3_ATI                        0x8828
#define GL_DRAW_BUFFER4_ATI                        0x8829
#define GL_DRAW_BUFFER5_ATI                        0x882A
#define GL_DRAW_BUFFER6_ATI                        0x882B
#define GL_DRAW_BUFFER7_ATI                        0x882C
#define GL_DRAW_BUFFER8_ATI                        0x882D
#define GL_DRAW_BUFFER9_ATI                        0x882E
#define GL_DRAW_BUFFER10_ATI                       0x882F
#define GL_DRAW_BUFFER11_ATI                       0x8830
#define GL_DRAW_BUFFER12_ATI                       0x8831
#define GL_DRAW_BUFFER13_ATI                       0x8832
#define GL_DRAW_BUFFER14_ATI                       0x8833
#define GL_DRAW_BUFFER15_ATI                       0x8834

static int initialise_GL_ATI_draw_buffers();

#else
static int GL_ATI_draw_buffers_initialised = 1;
#endif
