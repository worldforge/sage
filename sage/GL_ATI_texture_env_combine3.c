// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_texture_env_combine3.h"
#include "utility.h"


static const char * const str_GL_ATI_texture_env_combine3 = "GL_ATI_texture_env_combine3";

int GL_ATI_texture_env_combine3_initialised = 0;

int initialise_GL_ATI_texture_env_combine3() {
  GL_ATI_texture_env_combine3_initialised = isExtensionSupported(str_GL_ATI_texture_env_combine3);
  return GL_ATI_texture_env_combine3_initialised;
}
