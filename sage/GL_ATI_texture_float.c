// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_texture_float.h"
#include "utility.h"

static int initialise_GL_ATI_texture_float() {
  GL_ATI_texture_float_initialised = isExtensionSupported(str_GL_ATI_texture_float);
  return GL_ATI_texture_float_initialised;
}
