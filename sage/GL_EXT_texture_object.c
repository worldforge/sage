// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_texture_object.h"
#include "utility.h"

static const char * const str_GL_EXT_texture_object = "GL_EXT_texture_object";

PFNGLGENTEXTURESEXTPROC glGenTexturesEXT = 0;
PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT = 0;
PFNGLBINDTEXTUREEXTPROC glBindTextureEXT = 0;
PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT = 0;
PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT = 0;
PFNGLISTEXTUREEXTPROC glIsTextureEXT = 0;

int GL_EXT_texture_object_initialised = 0;

int initialise_GL_EXT_texture_object() {
  GL_EXT_texture_object_initialised = isExtensionSupported(str_GL_EXT_texture_object);

  glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC)SDL_GL_GetProcAddress("glGenTexturesEXT");
  glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC)SDL_GL_GetProcAddress("glDeleteTexturesEXT");
  glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC)SDL_GL_GetProcAddress("glBindTextureEXT");
  glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)SDL_GL_GetProcAddress("glPrioritizeTexturesEXT");
  glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)SDL_GL_GetProcAddress("glAreTexturesResidentEXT");
  glIsTextureEXT = (PFNGLISTEXTUREEXTPROC)SDL_GL_GetProcAddress("glIsTextureEXT");

  GL_EXT_texture_object_initialised = (glGenTexturesEXT && glDeleteTexturesEXT && glBindTextureEXT && glPrioritizeTexturesEXT && glAreTexturesResidentEXT && glIsTextureEXT);

  return GL_EXT_texture_object_initialised;
}
