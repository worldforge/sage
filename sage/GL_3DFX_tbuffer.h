// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_3DFX_tbuffer
#define GL_3DFX_tbuffer 1

#include <GL/gl.h>

static const char * const str_GL_3DFX_tbuffer = "GL_3DFX_tbuffer";
static int GL_3DFX_tbuffer_initialised = 0;

typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint mask);
static PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX = 0;

static int initialise_GL_3DFX_tbuffer();

#else
static int GL_3DFX_tbuffer_initialised = 1;
#endif
