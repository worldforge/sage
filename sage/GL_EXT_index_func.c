// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_index_func.h"
#include "utility.h"

static const char * const str_GL_EXT_index_func = "GL_EXT_index_func";

PFNGLINDEXFUNCEXTPROC glIndexFuncEXT = 0;

int GL_EXT_index_func_initialised = 0;

int initialise_GL_EXT_index_func() {
  if (!isExtensionSupported(str_GL_EXT_index_func)) return 0;

  glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC)SDL_GL_GetProcAddress("glIndexFuncEXT");

  GL_EXT_index_func_initialised = (glIndexFuncEXT != 0);
  
  return GL_EXT_index_func_initialised;
}
