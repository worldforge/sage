// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_static_vertex_array.h"
#include "utility.h"

static const char * const str_GL_EXT_static_vertex_array = "GL_EXT_static_vertex_array";

PFNGLLOCKARRAYSEXTPROC glLockArraysEXT = 0;
PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT = 0;

int GL_EXT_static_vertex_array_initialised = 0;

int initialise_GL_EXT_static_vertex_array() {
  if (!isExtensionSupported(str_GL_EXT_static_vertex_array)) return 0;

  GL_EXT_static_vertex_array_initialised = (glLockArraysEXT && glUnlockArraysEXT);
  
  return GL_EXT_static_vertex_array_initialised;
}
