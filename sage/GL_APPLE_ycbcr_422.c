// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_ycbcr_422.h"
#include "utility.h"

int initialise_GL_APPLE_ycbcr_422() {
  GL_APPLE_ycbcr_422_initialised = isExtensionSupported(str_GL_APPLE_ycbcr_422);
  return GL_APPLE_ycbcr_422_initialised;
}
