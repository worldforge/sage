// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_vertex_blend.h"
#include "utility.h"

int initialise_GL_ARB_vertex_blend() {
  if (!isExtensionSupported(str_GL_ARB_vertex_blend)) return 0;
  
  glWeightbvARB = (PFNGLWEIGHTBVARBPROC)SDL_GL_GetProcAddress("glWeightbvARB");
  glWeightsvARB = (PFNGLWEIGHTSVARBPROC)SDL_GL_GetProcAddress("glWeightsvARB");
  glWeightivARB = (PFNGLWEIGHTIVARBPROC)SDL_GL_GetProcAddress("glWeightivARB");
  glWeightfvARB = (PFNGLWEIGHTFVARBPROC)SDL_GL_GetProcAddress("glWeightdvARB");
  glWeightdvARB = (PFNGLWEIGHTDVARBPROC)SDL_GL_GetProcAddress("glWeightdvARB");
  glWeightubvARB = (PFNGLWEIGHTUBVARBPROC)SDL_GL_GetProcAddress("glWeightubvARB");
  glWeightusvARB = (PFNGLWEIGHTUSVARBPROC)SDL_GL_GetProcAddress("glWeightsuvARB");
  glWeightuivARB = (PFNGLWEIGHTUIVARBPROC)SDL_GL_GetProcAddress("glWeightuivARB");
  glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC)SDL_GL_GetProcAddress("glWeightPointerARB");
  glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC)SDL_GL_GetProcAddress("glVertexBlendARB");
  
  
  GL_ARB_vertex_blend_initialised = (glWeightbvARB && glWeightsvARB && glWeightivARB && glWeightfvARB && glWeightdvARB && glWeightubvARB && glWeightusvARB && glWeightuivARB && glWeightPointerARB && glVertexBlendARB);
  
  return GL_ARB_vertex_blend_initialised;
}
