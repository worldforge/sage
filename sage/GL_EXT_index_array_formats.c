// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_index_array_formats.h"
#include "utility.h"

static const char * const str_GL_EXT_index_array_formats = "GL_EXT_index_array_formats";

int GL_EXT_index_array_formats_initialised = 0;

int initialise_GL_EXT_index_array_formats() {
  GL_EXT_index_array_formats_initialised = isExtensionSupported(str_GL_EXT_index_array_formats);
  return GL_EXT_index_array_formats_initialised;
}