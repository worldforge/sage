// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_texture3D.h"
#include "utility.h"

static int initialise_GL_EXT_texture3D() {
  if (isExtensionSupported(str_GL_EXT_texture3D)) {
    return 0;
  }
  glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC)SDL_GL_GetProcAddress("glTexImage3DEXT");

  GL_EXT_texture3D_initialised = (glTexImage3DEXT != 0);
	  
  return GL_EXT_texture3D_initialised;
}
