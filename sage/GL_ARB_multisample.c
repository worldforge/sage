// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_multisample.h"
#include "utility.h"

int initialise_GL_ARB_multisample() {
  GL_ARB_multisample_initialised = isExtensionSupported(str_GL_ARB_multisample);

  glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC)SDL_GL_GetProcAddress("glSampleCoverageARB");
  GL_ARB_multisample_initialised = (glSampleCoverageARB != 0);
  
  return GL_ARB_multisample_initialised;
}
