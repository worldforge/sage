// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_multi_draw_arrays.h"
#include "utility.h"

static const char * const str_GL_EXT_multi_draw_arrays = "GL_EXT_multi_draw_arrays";

PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

int GL_EXT_multi_draw_arrays_initialised = 0;

int initialise_GL_EXT_multi_draw_arrays() {
  if (!isExtensionSupported(str_GL_EXT_multi_draw_arrays)) return 0;

  glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)SDL_GL_GetProcAddress("glMultiDrawArraysEXT");
  glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)SDL_GL_GetProcAddress("glMultiDrawElementsEXT");

  GL_EXT_multi_draw_arrays_initialised = (glMultiDrawArraysEXT && glMultiDrawElementsEXT);
  
  return GL_EXT_multi_draw_arrays_initialised;
}
