// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_SGIS_generate_mipmap.h"
#include "utility.h"

static const char * const str_GL_SGIS_generate_mipmap = "GL_SGIS_generate_mipmap";

int GL_SGIS_generate_mipmap_initialised = 0;

int initialise_GL_SGIS_generate_mipmap() {
  GL_SGIS_generate_mipmap_initialised = isExtensionSupported(str_GL_SGIS_generate_mipmap);
  return GL_SGIS_generate_mipmap_initialised;
}
