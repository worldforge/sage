// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_paletted_texture.h"
#include "utility.h"

static const char * const str_GL_EXT_paletted_texture = "GL_EXT_paletted_texture";

PFNGLCOLORTABLEEXTPROC glColorTableEXT = 0;
PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT = 0;
PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT = 0;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT = 0;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT = 0;

int GL_EXT_paletted_texture_initialised = 0;

int initialise_GL_EXT_paletted_texture() {
  if (!isExtensionSupported(str_GL_EXT_paletted_texture)) return 0;

  glColorTableEXT = (PFNGLCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("glColorTableEXT");
  glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)SDL_GL_GetProcAddress("glColorSubTableEXT");
  glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("glGetColorTableEXT");
  glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glGetColorTableParameterivEXT");
  glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glGetColorTableParameterfvEXT");

  GL_EXT_paletted_texture_initialised = (glColorTableEXT && glColorSubTableEXT && glGetColorTableEXT && glGetColorTableParameterivEXT && glGetColorTableParameterfvEXT);

  return GL_EXT_paletted_texture_initialised;
}
