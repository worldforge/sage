// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_pn_triangles.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ATI_pn_triangles = "GL_ATI_pn_triangles";

PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI = 0;
PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI = 0;

int GL_ATI_pn_triangles_initialised = 0;

int initialise_GL_ATI_pn_triangles() {
  if (!isExtensionSupported(str_GL_ATI_pn_triangles)) return 0;

  glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC)SDL_GL_GetProcAddress("glPNTrianglesiATI");
  glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC)SDL_GL_GetProcAddress("glPNTrianglesfATI");

  GL_ATI_pn_triangles_initialised = (glPNTrianglesiATI && glPNTrianglesfATI);

  return GL_ATI_pn_triangles_initialised;
}
