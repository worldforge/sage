// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_texture.h"
#include "utility.h"

int initialise_GL_EXT_texture() {
  GL_EXT_texture_initialised = isExtensionSupported(str_GL_EXT_texture);
  return GL_EXT_texture_initialised;
}
