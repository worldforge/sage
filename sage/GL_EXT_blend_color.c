// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_blend_color.h"
#include "SDL.h"
#include "utility.h"

int initialise_GL_EXT_blend_color() {
  if (isExtensionSupported(str_GL_EXT_blend_color)) {
    return 0;
  }
  glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC)SDL_GL_GetProcAddress("glBlendColorEXT");

  GL_EXT_blend_color_initialised = (glBlendColorEXT != 0);
	  
  return GL_EXT_blend_color_initialised;
}
