// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1

#include <GL/gl.h>

static const char * const str_GL_EXT_blend_minmax = "GL_EXT_blend_minmax";
static int GL_EXT_blend_minmax_initialised = 0;

typedef void (*PFNGLBLENDEQUATIONEXTPROC)(GLenum mode);
static PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT = 0;

#define GL_FUNC_ADD_EXT                     0x8006
#define GL_MIN_EXT                          0x8007
#define GL_MAX_EXT                          0x8008
#define GL_BLEND_EQUATION_EXT               0x8009


static int initialise_GL_EXT_blend_minmax();

#else
static int GL_EXT_blend_minmax_initialised = 1;
#endif
