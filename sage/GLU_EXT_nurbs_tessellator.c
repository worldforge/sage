// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GLU_EXT_nurbs_tessellator.h"
#include "utility.h"

static const char * const str_GLU_EXT_nurbs_tessellator = "GLU_EXT_nurbs_tessellator";

PFNGLUNURBSCALLBACKDATAEXTPROC gluNurbsCallbackDataEXT;

int GLU_EXT_nurbs_tessellator_initialised = 0;

int initialise_GLU_EXT_nurbs_tessellator() {
  if (!isExtensionSupported(str_GLU_EXT_nurbs_tessellator)) return 0;

  gluNurbsCallbackDataEXT = (PFNGLUNURBSCALLBACKDATAEXTPROC)SDL_GL_GetProcAddress("gluNurbsCallbackDataEXT");

  GLU_EXT_nurbs_tessellator_initialised = (gluNurbsCallbackDataEXT != 0);

  return GLU_EXT_nurbs_tessellator_initialised;
}
