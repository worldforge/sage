// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_color_subtable.h"
#include "utility.h"

static int initialise_GL_EXT_color_subtable() {
  if (!isExtensionSupported(str_GL_EXT_color_subtable)) return 0;

  glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)SDL_GL_GetProcAddress("glColorSubTableEXT");
  glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC)SDL_GL_GetProcAddress("glCopyColorSubTableEXT");
  
  GL_EXT_color_subtable_initialised = (glColorSubTableEXT && glCopyColorSubTableEXT);
  
  return GL_EXT_color_subtable_initialised;
}
