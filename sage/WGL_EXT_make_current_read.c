// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_make_current_read.h"
#include "utility.h"

static const char * const str_WGL_EXT_make_current_read = "WGL_EXT_make_current_read";

PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT = 0;
PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT = 0;

int WGL_EXT_make_current_read_initialised = 0;

int initialise_WGL_EXT_make_current_read() {
  if (!isExtensionSupported(str_WGL_EXT_make_current_read)) return 0;

  wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)SDL_GL_GetProcAddress("wglMakeContextCurrentEXT");
  wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)SDL_GL_GetProcAddress("wglGetCurrentReadDCEXT");

  WGL_EXT_make_current_read_initialised = (wglMakeContextCurrentEXT && wglGetCurrentReadDCEXT);

  return WGL_EXT_make_current_read_initialised;
}
