// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_ARB_render_texture.h"
#include "utility.h"

int initialise_WGL_ARB_render_texture() {
  if (!isExtensionSupported(str_WGL_ARB_render_texture)) return 0;

  wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)SDL_GL_GetProcAddress("wglBindTexImageARB");
  wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)SDL_GL_GetProcAddress("wglReleaseTexImageARB");
  wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)SDL_GL_GetProcAddress("wglSetPbufferAttribARB");

  WGL_ARB_render_texture_initialised = (wglBindTexImageARB && wglReleaseTexImageARB && wglSetPbufferAttribARB);

  return WGL_ARB_render_texture_initialised;
}
