// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_secondary_color.h"
#include "utility.h"

static const char * const str_GL_EXT_secondary_color = "GL_EXT_secondary_color";

PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT = 0;
PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT = 0;
PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT = 0;
PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT = 0;
PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT = 0;
PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT = 0;
PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT = 0;
PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT = 0;
PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT = 0;
PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT = 0;
PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT = 0;
PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT = 0;
PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT = 0;
PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT = 0;
PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT = 0;
PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT = 0;
PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT = 0;

int GL_EXT_secondary_color_initialised = 0;

int initialise_GL_EXT_secondary_color() {
  if (!isExtensionSupported(str_GL_EXT_secondary_color)) return 0;

  glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3bEXT");
  glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3bvEXT");
  glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3dEXT");
  glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3dvEXT");
  glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3fEXT");
  glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3fvEXT");
  glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3iEXT");
  glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3ivEXT");
  glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3sEXT");
  glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3svEXT");
  glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3ubEXT");
  glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3ubvEXT");
  glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3uiEXT");
  glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3uivEXT");
  glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3usEXT");
  glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)SDL_GL_GetProcAddress("glSecondaryColor3usvEXT");
  glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)SDL_GL_GetProcAddress("glSecondaryColorPointerEXT");

  GL_EXT_secondary_color_initialised = (glSecondaryColor3bEXT && glSecondaryColor3bvEXT && glSecondaryColor3dEXT && glSecondaryColor3dvEXT && glSecondaryColor3fEXT && glSecondaryColor3fvEXT && glSecondaryColor3iEXT && glSecondaryColor3ivEXT && glSecondaryColor3sEXT && glSecondaryColor3svEXT && glSecondaryColor3ubEXT && glSecondaryColor3ubvEXT && glSecondaryColor3uiEXT && glSecondaryColor3uivEXT && glSecondaryColor3usEXT && glSecondaryColor3usvEXT && glSecondaryColorPointerEXT);

  return GL_EXT_secondary_color_initialised;
}
