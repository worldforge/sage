// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_env_crossbar.h"
#include "utility.h"

static int initialise_GL_ARB_texture_env_crossbar() {
  GL_ARB_texture_env_crossbar_initialised = isExtensionSupported(str_GL_ARB_texture_env_crossbar);
  return GL_ARB_texture_env_crossbar_initialised;
}