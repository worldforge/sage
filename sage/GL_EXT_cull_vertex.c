// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_cull_vertex.h"
#include "utility.h"

static const char * const str_GL_EXT_cull_vertex = "GL_EXT_cull_vertex";

PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT = 0;
PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT = 0;

int GL_EXT_cull_vertex_initialised = 0;

int initialise_GL_EXT_cull_vertex() {
  if (!isExtensionSupported(str_GL_EXT_cull_vertex)) return 0;

  glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glCullParameterfvEXT");
  glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC)SDL_GL_GetProcAddress("glCullParameterdvEXT");
 
  GL_EXT_cull_vertex_initialised = (glCullParameterfvEXT && glCullParameterdvEXT);
  
  return GL_EXT_cull_vertex_initialised;
}
