// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_pixel_format.h"
#include "utility.h"

static int initialise_WGL_ARB_pixel_format() {
  if (!isExtensionSupported(str_WGL_ARB_pixel_format)) return 0;

  wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribivARB");
  wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribfvARB");
  wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)SDL_GL_GetProcAddress("wglChoosePixelFormatARB");

  WGL_ARB_pixel_format_initialised = (wglGetPixelFormatAttribivARB && wglGetPixelFormatAttribfvARB && wglChoosePixelFormatARB);

  return WGL_ARB_pixel_format_initialised;
}
