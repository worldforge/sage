// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GLX_EXT_import_context.h"
#include "utility.h"

static const char * const str_GLX_EXT_import_context = "GLX_EXT_import_context";

PFNGLXGETCURRENTDISPLAYEXTPROC glXGetCurrentDisplayEXT = 0;
PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT = 0;
PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT = 0;
PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT = 0;
PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT = 0;

int GLX_EXT_import_context_initialised = 0;

int initialise_GLX_EXT_import_context() {
  if (!isExtensionSupported(str_GLX_EXT_import_context)) return 0;

  glXGetCurrentDisplayEXT = (PFNGLXGETCURRENTDISPLAYEXTPROC)SDL_GL_GetProcAddress("glXGetCurrentDisplayEXT");
  glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC)SDL_GL_GetProcAddress("glXQueryContextInfoEXT");
  glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC)SDL_GL_GetProcAddress("glXGetContextIDEXT");
  glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC)SDL_GL_GetProcAddress("glXImportContextEXT");
  glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC)SDL_GL_GetProcAddress("glXFreeContextEXT");

  GLX_EXT_import_context_initialised = (glXGetCurrentDisplayEXT && glXQueryContextInfoEXT && glXGetContextIDEXT && glXImportContextEXT && glXFreeContextEXT);

  return GLX_EXT_import_context_initialised;
}
