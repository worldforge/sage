// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_extensions_string_H
#define WGL_EXT_extensions_string_H 1

#include <sage/sage.h>

#ifndef WGL_EXT_extensions_string
#define WGL_EXT_extensions_string 1

typedef const char (**PFNWGLGETEXTENSIONSSTRINGEXTPROC)(void);
   
#endif

SAGEAPI PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;

SAGEAPI int WGL_EXT_extensions_string_initialised;
SAGEAPI int initialise_WGL_EXT_extensions_string();

#endif
