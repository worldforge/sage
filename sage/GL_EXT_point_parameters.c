// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_point_parameters.h"
#include "utility.h"

static const char * const str_GL_EXT_point_parameters = "GL_EXT_point_parameters";

PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT = 0;
PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT = 0;

int GL_EXT_point_parameters_initialised = 0;

int initialise_GL_EXT_point_parameters() {
  if (!isExtensionSupported(str_GL_EXT_point_parameters)) return 0;

  glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC)SDL_GL_GetProcAddress("glPointParameterfEXT");
  glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glPointParameterfvEXT");

  GL_EXT_point_parameters_initialised = (glPointParameterfEXT && glPointParameterfvEXT);
  
  return GL_EXT_point_parameters_initialised;
}
