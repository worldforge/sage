// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_APPLE_fence.h"
#include "utility.h"

int initialise_GL_APPLE_fence() {
  if (!isExtensionSupported(str_GL_APPLE_fence)) return 0;

  glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC)SDL_GL_GetProcAddress("glGenFencesAPPLE");
  glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC)SDL_GL_GetProcAddress("glDeleteFencesAPPLE");
  glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC)SDL_GL_GetProcAddress("glSetFenceAPPLE");
  glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC)SDL_GL_GetProcAddress("glIsFenceAPPLE");
  glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC)SDL_GL_GetProcAddress("glTestFenceAPPLE");
  glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC)SDL_GL_GetProcAddress("glFinishFenceAPPLE");
  glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC)SDL_GL_GetProcAddress("glTestObjectAPPLE");
  glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC)SDL_GL_GetProcAddress("glFinishObjectAPPLE");

  GL_APPLE_fence_initialised = (glGenFencesAPPLE && glDeleteFencesAPPLE && glSetFenceAPPLE && glIsFenceAPPLE && glTestFenceAPPLE && glFinishFenceAPPLE && glTestObjectAPPLE && glFinishObjectAPPLE);

  return GL_APPLE_fence_initialised;
}
