// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_pbuffer.h"
#include "utility.h"

static const char * const str_WGL_EXT_pbuffer = "WGL_EXT_pbuffer";

PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT = 0;
PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT = 0;
PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT = 0;
PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT = 0;
PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT = 0;

int WGL_EXT_pbuffer_initialised = 0;

int initialise_WGL_EXT_pbuffer() {
  if (!isExtensionSupported(str_WGL_EXT_pbuffer)) return 0;
 
  wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglCreatePbufferEXT");
  wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)SDL_GL_GetProcAddress("wglGetPbufferDCEXT");
  wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)SDL_GL_GetProcAddress("wglReleasePbufferDCEXT");
  wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglDestroyPbufferEXT");
  wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglQueryPbufferEXT");

  WGL_EXT_pbuffer_initialised = (wglCreatePbufferEXT && wglGetPbufferDCEXT && wglReleasePbufferDCEXT && wglDestroyPbufferEXT && wglQueryPbufferEXT);

  return WGL_EXT_pbuffer_initialised;
}
