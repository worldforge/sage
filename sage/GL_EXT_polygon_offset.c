// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_polygon_offset.h"
#include "utility.h"

int initialise_GL_EXT_polygon_offset() {
  if (isExtensionSupported(str_GL_EXT_polygon_offset)) {
    return 0;
  }
  glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC)SDL_GL_GetProcAddress("glPolygonOffsetEXT");

  GL_EXT_polygon_offset_initialised = (glPolygonOffsetEXT != 0);
	  
  return GL_EXT_polygon_offset_initialised;
}
