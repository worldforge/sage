// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_env_dot3.h"
#include "utility.h"

int initialise_GL_ARB_texture_env_dot3() {
  GL_ARB_texture_env_dot3_initialised = isExtensionSupported(str_GL_ARB_texture_env_dot3);
  return GL_ARB_texture_env_dot3_initialised;
}
