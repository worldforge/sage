// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_NV_register_combiners2.h"
#include "utility.h"

static int initialised_GL_NV_register_combiners2() {
 if (isExtensionSupported(str_GL_NV_register_combiners2)) {
   return 0;
 }
 glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glCombinerStageParameterfvNV");
 glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glGetCombinerStageParameterfvNV");

  GL_NV_register_combiners2_initialised = (glCombinerStageParameterfvNV && glGetCombinerStageParameterfvNV);
  return GL_NV_register_combiners2_initialised;
}
