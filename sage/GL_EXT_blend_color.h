// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_color
#define GL_EXT_blend_color 1

#include <GL/gl.h>

static const char * const str_GL_EXT_blend_color = "GL_EXT_blend_color";
static int GL_EXT_blend_color_initialised = 0;

typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
static PFNGLBLENDCOLOREXTPROC glBlendColorEXT = 0;

#define GL_CONSTANT_COLOR_EXT               0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT     0x8002
#define GL_CONSTANT_ALPHA_EXT               0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT     0x8004
#define GL_BLEND_COLOR_EXT                  0x8005

static int initialise_GL_EXT_blend_color();

#else
static int GL_EXT_blend_color_initialised = 1;
#endif
