// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_vertex_array_object.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_APPLE_vertex_array_object = "GL_APPLE_vertex_array_object";

PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE = 0;
PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE = 0;
PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE = 0;
PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE = 0;

int GL_APPLE_vertex_array_object_initialised = 0;

int initialise_GL_APPLE_vertex_array_object() {
  if(!isExtensionSupported(str_GL_APPLE_vertex_array_object)) return 0;
  
  glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC)SDL_GL_GetProcAddress("glBindVertexArrayAPPLE");
  glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)SDL_GL_GetProcAddress("glDeleteVertexArraysAPPLE");
  glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC)SDL_GL_GetProcAddress("glGenVertexArraysAPPLE");
  glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC)SDL_GL_GetProcAddress("glIsVertexArrayAPPLE");

  GL_APPLE_vertex_array_object_initialised = (glBindVertexArrayAPPLE && glDeleteVertexArraysAPPLE && glGenVertexArraysAPPLE && glIsVertexArrayAPPLE);

  return GL_APPLE_vertex_array_object_initialised;
}
