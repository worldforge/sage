// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_index_material.h"
#include "utility.h"

static const char * const str_GL_EXT_index_material = "GL_EXT_index_material";

PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT = 0;

int GL_EXT_index_material_initialised = 0;

int initialise_GL_EXT_index_material() {
  if (!isExtensionSupported(str_GL_EXT_index_material)) return 0;

  glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC)SDL_GL_GetProcAddress("glIndexMaterialEXT");

  GL_EXT_index_material_initialised = (glIndexMaterialEXT != 0);
  
  return GL_EXT_index_material_initialised;
}
