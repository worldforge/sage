// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_texture_lod_bias.h"
#include "utility.h"

static const char * const str_GL_EXT_texture_lod_bias = "GL_EXT_texture_lod_bias";

int GL_EXT_texture_lod_bias_initialised = 0;

int initialise_GL_EXT_texture_lod_bias() {
  GL_EXT_texture_lod_bias_initialised = isExtensionSupported(str_GL_EXT_texture_lod_bias);
  return GL_EXT_texture_lod_bias_initialised;
}
