// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_3DFX_texture_compression_FXT1.h"
#include "utility.h"

int initialise_GL_3DFX_texture_compression_FXT1() {
  GL_3DFX_texture_compression_FXT1_initialised = isExtensionSupported(str_GL_3DFX_texture_compression_FXT1);
  return GL_3DFX_texture_compression_FXT1_initialised;
}
