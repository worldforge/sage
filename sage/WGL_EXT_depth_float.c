// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_depth_float.h"
#include "utility.h"

static const char * const str_WGL_EXT_depth_float = "WGL_EXT_depth_float";

int WGL_EXT_depth_float_initialised = 0;

int initialise_WGL_EXT_depth_float() {
  WGL_EXT_depth_float_initialised = isExtensionSupported(str_WGL_EXT_depth_float);
  return WGL_EXT_depth_float_initialised;
}
