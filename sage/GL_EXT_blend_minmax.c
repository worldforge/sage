// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_blend_minmax.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_EXT_blend_minmax = "GL_EXT_blend_minmax";

PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT = 0;

int GL_EXT_blend_minmax_initialised = 0;

int initialise_GL_EXT_blend_minmax() {
  if (!isExtensionSupported(str_GL_EXT_blend_minmax)) return 0;

  glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC)SDL_GL_GetProcAddress("glBlendEquationEXT");

  GL_EXT_blend_minmax_initialised = (glBlendEquationEXT != 0);

  return GL_EXT_blend_minmax_initialised;
}
