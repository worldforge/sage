// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_border_clamp.h"
#include "utility.h"

static const char * const str_GL_ARB_texture_border_clamp = "GL_ARB_texture_border_clamp";

int GL_ARB_texture_border_clamp_initialised = 0;

int initialise_GL_ARB_texture_border_clamp() {
  GL_ARB_texture_border_clamp_initialised = isExtensionSupported(str_GL_ARB_texture_border_clamp);
  return GL_ARB_texture_border_clamp_initialised;
}
