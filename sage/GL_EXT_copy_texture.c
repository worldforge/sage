// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_copy_texture.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_EXT_copy_texture = "GL_EXT_copy_texture";

PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT = 0;
PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT = 0;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT = 0;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT = 0;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT = 0;

int GL_EXT_copy_texture_initialised = 0;

int initialise_GL_EXT_copy_texture() {
  if (!isExtensionSupported(str_GL_EXT_copy_texture)) return 0;

  glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC)SDL_GL_GetProcAddress("glCopyTexImage1DEXT");
  glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC)SDL_GL_GetProcAddress("glCopyTexImage2DEXT");
  glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)SDL_GL_GetProcAddress("glCopyTexSubImage1DEXT");
  glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)SDL_GL_GetProcAddress("glCopyTexSubImage2DEXT");
  glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)SDL_GL_GetProcAddress("glCopyTexSubImage3DEXT");

  GL_EXT_copy_texture_initialised = (glCopyTexImage1DEXT && glCopyTexImage2DEXT && glCopyTexSubImage1DEXT && glCopyTexSubImage2DEXT && glCopyTexSubImage3DEXT);

  return GL_EXT_copy_texture_initialised;
}
