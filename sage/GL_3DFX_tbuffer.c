// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_3DFX_tbuffer.h"
#include "utility.h"

static int initialise_GL_3DFX_tbuffer() {
  if (!sExtensionSupported(str_GL_3DFX_tbuffer)) return 0;

  glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)SDL_GL_GetProcAddress("glTbufferMask3DFX");
  
  GL_3DFX_tbuffer_initialised = (glTbufferMask3DFX != 0);
  
  return GL_3DFX_tbuffer_initialised;
}
