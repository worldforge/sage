// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_convolution.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_EXT_convolution = "GL_EXT_convolution";

PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT = 0;
PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT = 0;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT = 0;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT = 0;
PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT = 0;
PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT = 0;
PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT = 0;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT = 0;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT = 0;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT = 0;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT = 0; 
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT = 0;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT = 0;

int GL_EXT_convolution_initialised = 0;

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
