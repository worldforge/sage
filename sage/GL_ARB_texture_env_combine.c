// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_env_combine.h"
#include "utility.h"

int initialise_GL_ARB_texture_env_combine() {
  GL_ARB_texture_env_combine_initialised = isExtensionSupported(str_GL_ARB_texture_env_combine);
  return GL_ARB_texture_env_combine_initialised;
}
