// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_compiled_vertex_array.h"
#include "utility.h"

int initialise_GL_EXT_compiled_vertex_array() {
  if (!isExtensionSupported(str_GL_EXT_compiled_vertex_array)) return 0;

  glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)SDL_GL_GetProcAddress("glLockArraysEXT");
  glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)SDL_GL_GetProcAddress("glUnlockArraysEXT");
  
  GL_EXT_compiled_vertex_array_initialised = (glLockArraysEXT && glUnlockArraysEXT);
  
  return GL_EXT_compiled_vertex_array_initialised;
}
