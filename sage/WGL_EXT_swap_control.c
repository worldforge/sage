// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_swap_control.h"
#include "utility.h"

static const char * const str_WGL_EXT_swap_control = "WGL_EXT_swap_control";

PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT = 0;
PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT = 0;

int WGL_EXT_swap_control_initialised = 0;

int initialise_WGL_EXT_swap_control() {
  if (!isExtensionSupported(str_WGL_EXT_swap_control)) return 0;

  wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)SDL_GL_GetProcAddress("wglSwapIntervalEXT");
  wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)SDL_GL_GetProcAddress("wglGetSwapIntervalEXT");

  WGL_EXT_swap_control_initialised = (wglSwapIntervalEXT && wglGetSwapIntervalEXT);
  
  return WGL_EXT_swap_control_initialised;
}
