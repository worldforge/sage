// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_cmyka.h"
#include "utility.h"

static int initialise_GL_EXT_cmyka() {
  GL_EXT_cmyka_initialised = isExtensionSupported(str_GL_EXT_cmyka);
  return GL_EXT_cmyka_initialised;
}
