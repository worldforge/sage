// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_window_pos.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_window_pos = "GL_ARB_window_pos";

PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB = 0;
PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB = 0;
PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB = 0;
PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB = 0;
PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB = 0;
PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB = 0;
PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB = 0;
PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB = 0;
PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB = 0;
PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB = 0;
PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB = 0;
PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB = 0;
PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB = 0;
PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB = 0;
PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB = 0;
PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB = 0;

int GL_ARB_window_pos_initialised = 0;

int initialise_GL_ARB_window_pos() {
  if (!isExtensionSupported(str_GL_ARB_window_pos)) {
    return 0;
  }
  glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC)SDL_GL_GetProcAddress("glWindowPos2dARB");
  glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC)SDL_GL_GetProcAddress("glWindowPos2fARB");
  glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC)SDL_GL_GetProcAddress("glWindowPos2iARB");
  glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC)SDL_GL_GetProcAddress("glWindowPos2sARB");
  glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC)SDL_GL_GetProcAddress("glWindowPos2dvARB");
  glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC)SDL_GL_GetProcAddress("glWindowPos2fvARB");
  glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC)SDL_GL_GetProcAddress("glWindowPos2ivARB");
  glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC)SDL_GL_GetProcAddress("glWindowPos2svARB");
  glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC)SDL_GL_GetProcAddress("glWindowPos3dARB");
  glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC)SDL_GL_GetProcAddress("glWindowPos3fARB");
  glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC)SDL_GL_GetProcAddress("glWindowPos3iARB");
  glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC)SDL_GL_GetProcAddress("glWindowPos3sARB");
  glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC)SDL_GL_GetProcAddress("glWindowPos3dvARB");
  glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC)SDL_GL_GetProcAddress("glWindowPos3fvARB");
  glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC)SDL_GL_GetProcAddress("glWindowPos3ivARB");
  glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC)SDL_GL_GetProcAddress("glWindowPos3svARB");


  GL_ARB_window_pos_initialised = (glWindowPos2dARB && glWindowPos2fARB && glWindowPos2iARB && glWindowPos2sARB && glWindowPos2dvARB && glWindowPos2fvARB && glWindowPos2ivARB && glWindowPos2svARB && glWindowPos3dARB && glWindowPos3fARB && glWindowPos3iARB && glWindowPos3sARB && glWindowPos3dvARB && glWindowPos3fvARB && glWindowPos3ivARB && glWindowPos3svARB);
    
  return GL_ARB_window_pos_initialised;
}
