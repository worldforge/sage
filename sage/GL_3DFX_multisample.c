// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_3DFX_multisample.h"
#include "utility.h"

static const char * const str_GL_3DFX_multisample = "GL_3DFX_multisample";

int GL_3DFX_multisample_initialised = 0;

int initialise_GL_3DFX_multisample() {
  GL_3DFX_multisample_initialised = isExtensionSupported(str_GL_3DFX_multisample);
  return GL_3DFX_multisample_initialised;
}
