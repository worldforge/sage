// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_stencil_two_side.h"
#include "utility.h"

static const char * const str_GL_EXT_stencil_two_side = "GL_EXT_stencil_two_side";

PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT = 0;

int GL_EXT_stencil_two_side_initialised = 0;

int initialise_GL_EXT_stencil_two_side() {
  if (!isExtensionSupported(str_GL_EXT_stencil_two_side)) return 0;
  
  glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC)SDL_GL_GetProcAddress("glActiveStencilFaceEXT");
  
  GL_EXT_stencil_two_side_initialised = (glActiveStencilFaceEXT != 0);
  
  return GL_EXT_stencil_two_side_initialised;
}
