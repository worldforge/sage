// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_shadow_funcs.h"
#include "utility.h"

static const char * const str_GL_EXT_shadow_funcs = "GL_EXT_shadow_funcs";

int GL_EXT_shadow_funcs_initialised = 0;

int initialise_GL_EXT_shadow_funcs() {
  GL_EXT_shadow_funcs_initialised = isExtensionSupported(str_GL_EXT_shadow_funcs);
  return GL_EXT_shadow_funcs_initialised;
}
