// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_blend_func_separate.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_EXT_blend_func_separate = "GL_EXT_blend_func_separate";

PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT = 0;

int GL_EXT_blend_func_separate_initialised = 0;

int initialise_GL_EXT_blend_func_separate() {
  if (!isExtensionSupported(str_GL_EXT_blend_func_separate)) return 0;

  glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC)SDL_GL_GetProcAddress("glBlendFuncSeparateEXT");
   
  GL_EXT_blend_func_separate_initialised = (glBlendFuncSeparateEXT != 0);
  
  return GL_EXT_blend_func_separate_initialised;
}
