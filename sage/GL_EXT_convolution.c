// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_convolution.h"
#include "utility.h"

int initialise_GL_EXT_convolution() {
  if (!isExtensionSupported(str_GL_EXT_convolution)) return 0;

  glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)SDL_GL_GetProcAddress("glConvolutionFilter1DEXT");
  glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)SDL_GL_GetProcAddress("glConvolutionFilter2DEXT");
  glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)SDL_GL_GetProcAddress("glCopyConvolutionFilter1DEXT");
  glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)SDL_GL_GetProcAddress("glCopyConvolutionFilter2DEXT");
  glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)SDL_GL_GetProcAddress("glGetConvolutionFilterEXT");
  glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC)SDL_GL_GetProcAddress("glSeparableFilter2DEXT");
  glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)SDL_GL_GetProcAddress("glGetSeparableFilterEXT");
  glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)SDL_GL_GetProcAddress("glConvolutionParameteriEXT");
  glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glConvolutionParameterivEXT");
  glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)SDL_GL_GetProcAddress("glConvolutionParameterfEXT");
  glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glConvolutionParameterfvEXT");
  glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glGetConvolutionParameterivEXT");
  glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glGetConvolutionParameterfvEXT");

  GL_EXT_convolution_initialised = (glConvolutionFilter1DEXT && glConvolutionFilter2DEXT && glCopyConvolutionFilter1DEXT && glCopyConvolutionFilter2DEXT && glGetConvolutionFilterEXT && glSeparableFilter2DEXT && glGetSeparableFilterEXT && glConvolutionParameteriEXT && glConvolutionParameterivEXT && glConvolutionParameterfEXT && glConvolutionParameterfvEXT && glGetConvolutionParameterivEXT && glGetConvolutionParameterfvEXT); 

  return GL_EXT_convolution_initialised;
}
