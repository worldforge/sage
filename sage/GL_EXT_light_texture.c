// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_light_texture.h"
#include "utility.h"

static const char * const str_GL_EXT_light_texture = "GL_EXT_light_texture";

PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT = 0;
PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT = 0;
PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT = 0;

int GL_EXT_light_texture_initialised = 0;

int initialise_GL_EXT_light_texture() {
  if (!isExtensionSupported(str_GL_EXT_light_texture)) return 0;

  glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC)SDL_GL_GetProcAddress("glApplyTextureEXT");
  glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC)SDL_GL_GetProcAddress("glTextureLightEXT");
  glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC)SDL_GL_GetProcAddress("glTextureMaterialEXT");

  GL_EXT_light_texture_initialised = (glApplyTextureEXT && glTextureLightEXT && glTextureMaterialEXT);

  return GL_EXT_light_texture_initialised;
}
