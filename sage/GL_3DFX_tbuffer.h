// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_3DFX_tbuffer_H
#define GL_3DFX_tbuffer_H 1

#include <GL/gl.h>

#include "sage.h"

#ifndef GL_3DFX_tbuffer
#define GL_3DFX_tbuffer 1
	

typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint mask);

#endif

SAGEAPI PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX;

SAGEAPI int GL_3DFX_tbuffer_initialised;
SAGEAPI int initialise_GL_3DFX_tbuffer();

#endif
