// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_fog_coord.h"
#include "utility.h"

static const char * const str_GL_EXT_fog_coord = "GL_EXT_fog_coord";

PFNGLFOGCOORDFEXTPROC glFogCoordfEXT = 0;
PFNGLFOGCOORDDEXTPROC glFogCoorddEXT = 0;
PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT = 0;
PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT = 0;
PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT = 0;

int GL_EXT_fog_coord_initialised = 0;

int initialise_GL_EXT_fog_coord() {
  if (!isExtensionSupported(str_GL_EXT_fog_coord)) return 0;

  glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)SDL_GL_GetProcAddress("glFogCoordfEXT");
  glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)SDL_GL_GetProcAddress("glFogCoorddEXT");
  glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)SDL_GL_GetProcAddress("glFogCoordfvEXT");
  glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)SDL_GL_GetProcAddress("glglFogCoorddvEXT");
  glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)SDL_GL_GetProcAddress("glFogCoordPointerEXT");

  GL_EXT_fog_coord_initialised = (glFogCoordfEXT && glFogCoorddEXT && glFogCoordfvEXT && glFogCoorddvEXT && glFogCoordPointerEXT);

  return GL_EXT_fog_coord_initialised;
}
