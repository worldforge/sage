// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_envmap_bumpmap.h"
#include "utility.h"

static int initialise_GL_ATI_envmap_bumpmap() {
  if (!isExtensionSupported(str_GL_ATI_envmap_bumpmap)) return 0;
  
  glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)SDL_GL_GetProcAddress("glTexBumpParameterivATI");
  glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)SDL_GL_GetProcAddress("glTexBumpParameterfvATI");

  glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)SDL_GL_GetProcAddress("glGetTexBumpParameterivATI");
  glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)SDL_GL_GetProcAddress("glGetTexBumpParameterfvATI");

  GL_ATI_envmap_bumpmap_initialised = (glTexBumpParameterivATI && glTexBumpParameterfvATI && glGetTexBumpParameterivATI && glGetTexBumpParameterfvATI);

  return GL_ATI_envmap_bumpmap_initialised;
}
