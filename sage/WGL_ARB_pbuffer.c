// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_pbuffer.h"
#include "utility.h"

int initialise_WGL_ARB_pbuffer() {
  if (!isExtensionSupported(str_WGL_ARB_pbuffer)) return 0;

  wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)SDL_GL_GetProcAddress("wglCreatePbufferARB");
  wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)SDL_GL_GetProcAddress("wglGetPbufferDCARB");
  wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)SDL_GL_GetProcAddress("wglReleasePbufferDCARB");
  wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)SDL_GL_GetProcAddress("wglDestroyPbufferARB");
  wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)SDL_GL_GetProcAddress("wglQueryPbufferARB");

  WGL_ARB_pbuffer_initialised = (wglCreatePbufferARB && wglGetPbufferDCARB && wglReleasePbufferDCARB && wglDestroyPbufferARB && wglQueryPbufferARB);

  return WGL_ARB_pbuffer_initialised;
}
