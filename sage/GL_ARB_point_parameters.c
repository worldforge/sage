// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_point_parameters.h"
#include "utility.h"


int initialise_GL_ARB_point_parameters() {
  GL_ARB_point_parameters_initialised = isExtensionSupported(str_GL_ARB_point_parameters);

  glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC)SDL_GL_GetProcAddress("glPointParameterfARB");
  glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC)SDL_GL_GetProcAddress("glPointParameterfvARB");
  
  GL_ARB_point_parameters_initialised = (glPointParameterfARB && glPointParameterfvARB);
  
  return GL_ARB_point_parameters_initialised;
}
