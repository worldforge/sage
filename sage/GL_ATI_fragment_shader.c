// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_fragment_shader.h"
#include "utility.h"

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
