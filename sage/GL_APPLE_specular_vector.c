// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_specular_vector.h"
#include "utility.h"

static const char * const str_GL_APPLE_specular_vector = "GL_APPLE_specular_vector";

int GL_APPLE_specular_vector_initialised = 0;

int initialise_GL_APPLE_specular_vector() {
  GL_APPLE_specular_vector_initialised = isExtensionSupported(str_GL_APPLE_specular_vector);
  return GL_APPLE_specular_vector_initialised;
}
