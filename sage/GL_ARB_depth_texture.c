// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_depth_texture.h"
#include "utility.h"

static const char * const str_GL_ARB_depth_texture = "GL_ARB_depth_texture";

int GL_ARB_depth_texture_initialised = 0;

int initialise_GL_ARB_depth_texture() {
  GL_ARB_depth_texture_initialised = isExtensionSupported(str_GL_ARB_depth_texture);
  return GL_ARB_depth_texture_initialised;
}
