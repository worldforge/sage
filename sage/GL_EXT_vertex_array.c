// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_vertex_array.h"
#include "utility.h"

static const char * const str_GL_EXT_vertex_array = "GL_EXT_vertex_array";

PFNGLARRAYELEMENTEXTPROC glArrayElementEXT = 0;
PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT = 0;
PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT = 0;
PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT = 0;
PFNGLCOLORPOINTEREXTPROC glColorPointerEXT = 0;
PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT = 0;
PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT = 0;
PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT = 0;
PFNGLGETPOINTERVEXTPROC glGetPointervEXT = 0;

int GL_EXT_vertex_array_initialised = 0;

int initialise_GL_EXT_vertex_array() {
  GL_EXT_vertex_array_initialised = isExtensionSupported(str_GL_EXT_vertex_array);
 
  glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC)SDL_GL_GetProcAddress("glArrayElementEXT");
  glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC)SDL_GL_GetProcAddress("glDrawArraysEXT");
  glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC)SDL_GL_GetProcAddress("glVertexPointerEXT");
  glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC)SDL_GL_GetProcAddress("glNormalPointerEXT");
  glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC)SDL_GL_GetProcAddress("glColorPointerEXT");
  glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC)SDL_GL_GetProcAddress("glIndexPointerEXT");
  glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC)SDL_GL_GetProcAddress("glTexCoordPointerEXT");
  glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC)SDL_GL_GetProcAddress("glEdgeFlagPointerEXT");
  glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC)SDL_GL_GetProcAddress("glGetPointervEXT");

  GL_EXT_vertex_array_initialised = (glArrayElementEXT && glDrawArraysEXT && glVertexPointerEXT && glNormalPointerEXT && glColorPointerEXT && glIndexPointerEXT && glTexCoordPointerEXT && glEdgeFlagPointerEXT && glGetPointervEXT);

  return GL_EXT_vertex_array_initialised;
}
