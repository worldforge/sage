// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_vertex_array_range.h"
#include "utility.h"

int initialise_GL_APPLE_vertex_array_range() {
  if (!isExtensionSupported(str_GL_APPLE_vertex_array_range)) return 0;
  
  glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)SDL_GL_GetProcAddress("glVertexArrayRangeAPPLE");
  glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)SDL_GL_GetProcAddress("glFlushVertexArrayRangeAPPLE");
  glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)SDL_GL_GetProcAddress("glVertexArrayParameteriAPPLE");

  GL_APPLE_vertex_array_range_initialised = (glVertexArrayRangeAPPLE && glFlushVertexArrayRangeAPPLE && glVertexArrayParameteriAPPLE);

  return GL_APPLE_vertex_array_range_initialised;
}
