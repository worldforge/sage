// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "WGL_EXT_multisample.h"
#include "utility.h"

static const char * const str_WGL_EXT_multisample = "WGL_EXT_multisample";

PFNWGLSAMPLEMASKEXTPROC wglSampleMaskEXT = 0;
PFNWGLSAMPLEPATTERNEXTPROC wglSamplePatternEXT = 0;

int WGL_EXT_multisample_initialised = 0;

int initialise_WGL_EXT_multisample() {
  if (!isExtensionSupported(str_WGL_EXT_multisample)) return 0;

  wglSampleMaskEXT = (PFNWGLSAMPLEMASKEXTPROC)SDL_GL_GetProcAddress("wglSampleMaskEXT");
  iwglSamplePatternEXT = (PFNWGLSAMPLEPATTERNEXTPROC)SDL_GL_GetProcAddress("wglSamplePatternEXT");

  WGL_EXT_multisample_initialised = (wglSampleMaskEXT && glSamplePatternEXT);

  return WGL_EXT_multisample_initialised;
}
