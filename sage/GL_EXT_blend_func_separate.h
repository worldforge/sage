// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_blend_func_separate
#define GL_EXT_blend_func_separate 1

#include <GL/gl.h>

static const char * const str_GL_EXT_blend_func_separate = "GL_EXT_blend_func_separate";
static int GL_EXT_blend_func_separate_initialised = 0;

typedef void (*PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
static PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT = 0;

#define GL_BLEND_DST_RGB_EXT                  0x80C8
#define GL_BLEND_SRC_RGB_EXT                  0x80C9
#define GL_BLEND_DST_ALPHA_EXT                0x80CA
#define GL_BLEND_SRC_ALPHA_EXT                0x80CB
			
static int initialise_GL_EXT_blend_func_separate();

#else
static int GL_EXT_blend_func_separate_initialised = 1;
#endif
