// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_3DFX_tbuffer.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_3DFX_tbuffer = "GL_3DFX_tbuffer";

PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX = 0;
int GL_3DFX_tbuffer_initialised = 0;

int initialise_GL_3DFX_tbuffer() {
  if (!isExtensionSupported(str_GL_3DFX_tbuffer)) return 0;

  glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)SDL_GL_GetProcAddress("glTbufferMask3DFX");
  
  GL_3DFX_tbuffer_initialised = (glTbufferMask3DFX != 0);
  
  return GL_3DFX_tbuffer_initialised;
}
