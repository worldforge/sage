// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_vertex_weighting.h"
#include "utility.h"

static const char * const str_GL_EXT_vertex_weighting = "GL_EXT_vertex_weighting";

PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT = 0;
PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT = 0;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT = 0;

int GL_EXT_vertex_weighting_initialised = 0;

int initialise_GL_EXT_vertex_weighting() {
  if (!isExtensionSupported(str_GL_EXT_vertex_weighting)) return 0;

  glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC)SDL_GL_GetProcAddress("glVertexWeightfEXT");
  glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC)SDL_GL_GetProcAddress("glVertexWeightfvEXT");
  glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)SDL_GL_GetProcAddress("glVertexWeightPointerEXT");

  GL_EXT_vertex_weighting_initialised = (glVertexWeightfEXT && glVertexWeightfvEXT && glVertexWeightPointerEXT); 

  return GL_EXT_vertex_weighting_initialised;
}
