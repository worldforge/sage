// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_fragment_shader.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ATI_fragment_shader = "GL_ATI_fragment_shader";

PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI = 0;
PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI = 0;
PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI = 0;
PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI = 0;
PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI = 0;
PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI = 0;
PFNGLSAMPLEMAPATIPROC glSampleMapATI = 0;
PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI = 0;
PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI = 0;
PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI = 0;
PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI = 0;
PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI = 0;
PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI = 0;
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI = 0;

int GL_ATI_fragment_shader_initialised = 0;

int initialise_GL_ATI_fragment_shader() {
  if (!isExtensionSupported(str_GL_ATI_fragment_shader)) return 0;
 
  glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)SDL_GL_GetProcAddress("glGenFragmentShadersATI");
  glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)SDL_GL_GetProcAddress("glBindFragmentShaderATI");
  glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)SDL_GL_GetProcAddress("glDeleteFragmentShaderATI");
  glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)SDL_GL_GetProcAddress("glBeginFragmentShaderATI");
  glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC)SDL_GL_GetProcAddress("glEndFragmentShaderATI");
  glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC)SDL_GL_GetProcAddress("glPassTexCoordATI");
  glSampleMapATI = (PFNGLSAMPLEMAPATIPROC)SDL_GL_GetProcAddress("glSampleMapATI");
  glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC)SDL_GL_GetProcAddress("glColorFragmentOp1ATI");
  glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC)SDL_GL_GetProcAddress("glColorFragmentOp2ATI");
  glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC)SDL_GL_GetProcAddress("glColorFragmentOp3ATI");
  glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC)SDL_GL_GetProcAddress("glAlphaFragmentOp1ATI");
  glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC)SDL_GL_GetProcAddress("glAlphaFragmentOp2ATI");
  glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC)SDL_GL_GetProcAddress("glAlphaFragmentOp3ATI");
  glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)SDL_GL_GetProcAddress("glSetFragmentShaderConstantATI");

  GL_ATI_fragment_shader_initialised = (glGenFragmentShadersATI && glBindFragmentShaderATI && glDeleteFragmentShaderATI && glBeginFragmentShaderATI && glEndFragmentShaderATI && glPassTexCoordATI && glSampleMapATI && glColorFragmentOp1ATI && glColorFragmentOp2ATI && glColorFragmentOp3ATI && glAlphaFragmentOp1ATI && glAlphaFragmentOp2ATI && glAlphaFragmentOp3ATI && glSetFragmentShaderConstantATI);

  

  return GL_ATI_fragment_shader_initialised;
}
