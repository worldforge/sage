// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_histogram.h"
#include "utility.h"

static const char * const str_GL_EXT_histogram = "GL_EXT_histogram";

PFNGLHISTOGRAMEXTPROC glHistogramEXT = 0;
PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT = 0;
PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT = 0;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT = 0;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT = 0;
PFNGLMINMAXEXTPROC glMinmaxEXT = 0;
PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT = 0;
PFNGLGETMINMAXEXTPROC glGetMinmaxEXT = 0;
PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT = 0;
PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT = 0;

int GL_EXT_histogram_initialised = 0;

int initialise_GL_EXT_histogram() {
  if (!isExtensionSupported(str_GL_EXT_histogram)) return 0;

  glHistogramEXT = (PFNGLHISTOGRAMEXTPROC)SDL_GL_GetProcAddress("glHistogramEXT");
  glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC)SDL_GL_GetProcAddress("glResetHistogramEXT");
  glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC)SDL_GL_GetProcAddress("glGetHistogramEXT");
  glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glGetHistogramParameterivEXT");
  glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glGetHistogramParameterfvEXT");
  glMinmaxEXT = (PFNGLMINMAXEXTPROC)SDL_GL_GetProcAddress("glMinmaxEXT");
  glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC)SDL_GL_GetProcAddress("glResetMinmaxEXT");
  glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC)SDL_GL_GetProcAddress("glGetMinmaxEXT");
  glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)SDL_GL_GetProcAddress("glGetMinmaxParameterivEXT");
  glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)SDL_GL_GetProcAddress("glGetMinmaxParameterfvEXT");

  GL_EXT_histogram_initialised = (glHistogramEXT && glResetHistogramEXT && glGetHistogramEXT && glGetHistogramParameterivEXT && glGetHistogramParameterfvEXT && glMinmaxEXT && glResetMinmaxEXT && glGetMinmaxEXT && glGetMinmaxParameterivEXT && glGetMinmaxParameterfvEXT);

  return GL_EXT_histogram_initialised;
}
