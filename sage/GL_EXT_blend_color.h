// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_color_H
#define GL_EXT_blend_color_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_blend_color
#define GL_EXT_blend_color 1

typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

#define GL_CONSTANT_COLOR_EXT               0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT     0x8002
#define GL_CONSTANT_ALPHA_EXT               0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT     0x8004
#define GL_BLEND_COLOR_EXT                  0x8005

#endif

SAGEAPI PFNGLBLENDCOLOREXTPROC glBlendColorEXT;

SAGEAPI int GL_EXT_blend_color_initialised;
SAGEAPI int initialise_GL_EXT_blend_color();

#endif
