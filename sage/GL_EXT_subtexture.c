// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_subtexture.h"
#include "utility.h"

static const char * const str_GL_EXT_subtexture = "GL_EXT_subtexture";

PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT = 0;
PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT = 0;
PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT = 0;

int GL_EXT_subtexture_initialised = 0;

int initialise_GL_EXT_subtexture() {
  if (!isExtensionSupported(str_GL_EXT_subtexture)) return 0;

  glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC)SDL_GL_GetProcAddress("glTexSubImage1DEXT");
  glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC)SDL_GL_GetProcAddress("glTexSubImage2DEXT");
  glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC)SDL_GL_GetProcAddress("glTexSubImage3DEXT");

  GL_EXT_subtexture_initialised = (glTexSubImage1DEXT && glTexSubImage2DEXT && glTexSubImage3DEXT);

  return GL_EXT_subtexture_initialised;
}
