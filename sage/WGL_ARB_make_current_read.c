// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_make_current_read.h"
#include "utility.h"

static int initialise_WGL_ARB_make_current_read() {
  if (!isExtensionSupported(str_WGL_ARB_make_current_read)) return 0;

  wglMakeContextCurrentARB = (wglMakeContextCurrentARB)SDL_GL_GetProcAddress("glwglMakeContextCurrentARB");
  wglGetCurrentReadDCARB = (wglGetCurrentReadDCARB)SDL_GL_GetProcAddress("glwglGetCurrentReadDCARB");

  WGL_ARB_make_current_read_initialised = (wglMakeContextCurrentARB && wglGetCurrentReadDCARB); 

  return WGL_ARB_make_current_read_initialised;
}
