// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GLU_EXT_object_space_tess.h"
#include "utility.h"

static const char * const str_GLU_EXT_object_space_tess = "GLU_EXT_object_space_tess";

int GLU_EXT_object_space_tess_initialised = 0;

int initialise_GLU_EXT_object_space_tess() {
  GLU_EXT_object_space_tess_initialised = isExtensionSupported(str_GLU_EXT_object_space_tess);
  return GLU_EXT_object_space_tess_initialised;
}
