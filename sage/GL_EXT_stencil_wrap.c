// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_stencil_wrap.h"
#include "utility.h"

static const char * const str_GL_EXT_stencil_wrap = "GL_EXT_stencil_wrap";

int GL_EXT_stencil_wrap_initialised = 0;

int initialise_GL_EXT_stencil_wrap() {
  GL_EXT_stencil_wrap_initialised = isExtensionSupported(str_GL_EXT_stencil_wrap);
  return GL_EXT_stencil_wrap_initialised;
}
