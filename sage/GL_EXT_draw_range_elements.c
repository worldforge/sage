// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_draw_range_elements.h"
#include "utility.h"

static const char * const str_GL_EXT_draw_range_elements = "GL_EXT_draw_range_elements";

PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT = 0;

int GL_EXT_draw_range_elements_initialised = 0;

int initialise_GL_EXT_draw_range_elements() {
  if (!isExtensionSupported(str_GL_EXT_draw_range_elements)) return 0;

  glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC)SDL_GL_GetProcAddress("glDrawRangeElementsEXT");
  
  GL_EXT_draw_range_elements_initialised = (glDrawRangeElementsEXT != 0);
  
  return GL_EXT_draw_range_elements_initialised;
}
