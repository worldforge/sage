// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_vertex_blend.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_vertex_blend = "GL_ARB_vertex_blend";

PFNGLWEIGHTBVARBPROC glWeightbvARB = 0;
PFNGLWEIGHTSVARBPROC glWeightsvARB = 0;
PFNGLWEIGHTIVARBPROC glWeightivARB = 0;
PFNGLWEIGHTFVARBPROC glWeightfvARB = 0;
PFNGLWEIGHTDVARBPROC glWeightdvARB = 0;
PFNGLWEIGHTUBVARBPROC glWeightubvARB = 0;
PFNGLWEIGHTUSVARBPROC glWeightusvARB = 0;
PFNGLWEIGHTUIVARBPROC glWeightuivARB = 0;
PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB = 0;
PFNGLVERTEXBLENDARBPROC glVertexBlendARB = 0;

int GL_ARB_vertex_blend_initialised = 0;

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
