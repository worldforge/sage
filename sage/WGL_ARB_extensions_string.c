// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_extensions_string.h"
#include "utility.h"

int initialise_WGL_ARB_extensions_string() {
  if (!isExtensionSupported(str_WGL_ARB_extensions_string)) return 0;

  wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)SDL_GL_GetProcAddress("wglGetExtensionsStringARB");
  
  WGL_ARB_extensions_string_initialised = (wglGetExtensionsStringARB != 0);
  
  return WGL_ARB_extensions_string_initialised;
}
