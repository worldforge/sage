// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_pixel_transform.h"
#include "utility.h"

static const char * const str_GL_EXT_pixel_transform = "GL_EXT_pixel_transform";

PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT = 0;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT = 0;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT = 0;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT = 0;
//PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC glGetPixelTransformParameterivEXT = 0;
//PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC glGetPixelTransformParameterfvEXT = 0;

int GL_EXT_pixel_transform_initialised = 0;

int initialise_GL_EXT_pixel_transform() {
  if (!isExtensionSupported(str_GL_EXT_pixel_transform)) return 0;

  glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)SDL_GL_GetProcAddress("glPixelTransformParameteriEXT");
  glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)SDL_GL_GetProcAddress("glPixelTransformParameterfEXT");
  glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glPixelTransformParameterivEXT");
  glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glPixelTransformParameterfvEXT");
//  glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glGetPixelTransformParameterivEXT");
//  glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glGetPixelTransformParameterfvEXT");

  GL_EXT_pixel_transform_initialised = (glPixelTransformParameteriEXT && glPixelTransformParameterfEXT && glPixelTransformParameterivEXT && glPixelTransformParameterfvEXT/* && glGetPixelTransformParameterivEXT && glGetPixelTransformParameterfvEXT*/);

  return GL_EXT_pixel_transform_initialised;
}
