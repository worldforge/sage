// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_pixel_format.h"
#include "utility.h"

static const char * const str_WGL_EXT_pixel_format = "WGL_EXT_pixel_format";

PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT = 0;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT = 0;
PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT = 0;

int WGL_EXT_pixel_format_initialised = 0;

int initialise_WGL_EXT_pixel_format() {
  if (!isExtensionSupported(str_WGL_EXT_pixel_format)) return 0;

  wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribivEXT");
  wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribfvEXT");
  wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)SDL_GL_GetProcAddress("wglChoosePixelFormatEXT");

  WGL_EXT_pixel_format_initialised = (wglGetPixelFormatAttribivEXT && wglGetPixelFormatAttribfvEXT && wglChoosePixelFormatEXT);  

  return WGL_EXT_pixel_format_initialised;
}
