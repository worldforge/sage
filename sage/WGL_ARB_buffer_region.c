// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_buffer_region.h"
#include "utility.h"

int initialise_WGL_ARB_buffer_region() {
  if (!isExtensionSupported(str_WGL_ARB_buffer_region)) return 0;

  wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglCreateBufferRegionARB");
  wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglDeleteBufferRegionARB");
  wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglSaveBufferRegionARB");
  wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglRestoreBufferRegionARB");

  WGL_ARB_buffer_region_initialised = (wglCreateBufferRegionARB && wglDeleteBufferRegionARB && wglSaveBufferRegionARB && wglRestoreBufferRegionARB);

  return WGL_ARB_buffer_region_initialised;
}
