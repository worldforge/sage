// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_422_pixels.h"
#include "utility.h"

int initialise_GL_EXT_422_pixels() {
  GL_EXT_422_pixels_initialised = isExtensionSupported(str_GL_EXT_422_pixels);
  return GL_EXT_422_pixels_initialised;
}
