// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GLX_EXT_visual_rating.h"
#include "utility.h"

static const char * const str_GLX_EXT_visual_rating = "GLX_EXT_visual_rating";

int GLX_EXT_visual_rating_initialised = 0;

int initialise_GLX_EXT_visual_rating() {
  GLX_EXT_visual_rating_initialised = isExtensionSupported(str_GLX_EXT_visual_rating);
  return GLX_EXT_visual_rating_initialised;
}
