// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_texture_perturb_normal.h"
#include "utility.h"

static const char * const str_GL_EXT_texture_perturb_normal = "GL_EXT_texture_perturb_normal";

PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT = 0;

int GL_EXT_texture_perturb_normal_initialised = 0;

int initialise_GL_EXT_texture_perturb_normal() {
  GL_EXT_texture_perturb_normal_initialised = isExtensionSupported(str_GL_EXT_texture_perturb_normal);
  
  glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC)SDL_GL_GetProcAddress("glTextureNormalEXT");
  
  GL_EXT_texture_perturb_normal_initialised = (glTextureNormalEXT != 0);
  
  return GL_EXT_texture_perturb_normal_initialised;
}
