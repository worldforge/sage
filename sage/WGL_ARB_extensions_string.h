// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_ARB_extensions_string
#define WGL_ARB_extensions_string 1

static const char * const str_WGL_ARB_extensions_string = "WGL_ARB_extensions_string";
static int WGL_ARB_extensions_string_initialised = 0;

typedef const char *(*PFNWGLGETEXTENSIONSSTRINGARBPROC)(HDC hdc);
static PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB = 0;

static int initialise_WGL_ARB_extensions_string();

#else
static int WGL_ARB_extensions_string_initialised = 1;
#endif
