// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_display_color_table.h"
#include "utility.h"

static const char * const str_WGL_EXT_display_color_table = "WGL_EXT_display_color_table";

PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT = 0;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT = 0;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT = 0;

int WGL_EXT_display_color_table_initialised = 0;

int initialise_WGL_EXT_display_color_table() {
  if (!isExtensionSupported(str_WGL_EXT_display_color_table)) return 0;

  wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglLoadDisplayColorTableEXT");
  wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglBindDisplayColorTableEXT");
  wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglDestroyDisplayColorTableEXT");

  WGL_EXT_display_color_table_initialised = (wglLoadDisplayColorTableEXT && wglBindDisplayColorTableEXT && wglDestroyDisplayColorTableEXT);
  
  return WGL_EXT_display_color_table_initialised;
}
