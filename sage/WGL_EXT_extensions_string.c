// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_extensions_string.h"
#include "utility.h"

static const char * const str_WGL_EXT_extensions_string = "WGL_EXT_extensions_string";

PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT = 0;

int WGL_EXT_extensions_string_initialised = 0;

int initialise_WGL_EXT_extensions_string() {
  if (!isExtensionSupported(str_WGL_EXT_extensions_string)) return 0;
  
  wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)SDL_GL_GetProcAddress("wglGetExtensionsStringEXT");

  WGL_EXT_extensions_string_initialised = (wglGetExtensionsStringEXT != 0);
  
  return WGL_EXT_extensions_string_initialised;
}
