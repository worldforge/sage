// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_fragment_lighting.h"
#include "utility.h"

static const char * const str_GL_EXT_fragment_lighting = "GL_EXT_fragment_lighting";

PFNGLFRAGMENTLIGHTMODELIEXTPROC glFragmentLightModeliEXT = 0;
PFNGLFRAGMENTLIGHTMODELFEXTPROC glFragmentLightModelfEXT = 0;
PFNGLFRAGMENTLIGHTMODELIVEXTPROC glFragmentLightModelivEXT = 0;
PFNGLFRAGMENTLIGHTMODELFVEXTPROC glFragmentLightModelfvEXT = 0;
PFNGLFRAGMENTLIGHTIEXTPROC glFragmentLightiEXT = 0;
PFNGLFRAGMENTLIGHTFEXTPROC glFragmentLightfEXT = 0;
PFNGLFRAGMENTLIGHTIVEXTPROC glFragmentLightivEXT = 0;
PFNGLFRAGMENTLIGHTFVEXTPROC glFragmentLightfvEXT = 0;
PFNGLGETFRAGMENTLIGHTIVEXTPROC glGetFragmentLightivEXT = 0;
PFNGLGETFRAGMENTLIGHTFVEXTPROC glGetFragmentLightfvEXT = 0;
PFNGLFRAGMENTMATERIALFEXTPROC glFragmentMaterialfEXT = 0;
PFNGLFRAGMENTMATERIALIEXTPROC glFragmentMaterialiEXT = 0;
PFNGLFRAGMENTMATERIALFVEXTPROC glFragmentMaterialfvEXT = 0;
PFNGLFRAGMENTMATERIALIVEXTPROC glFragmentMaterialivEXT = 0;
PFNGLFRAGMENTCOLORMATERIALEXTPROC glFragmentColorMaterialEXT = 0;
PFNGLGETFRAGMENTMATERIALFVEXTPROC glGetFragmentMaterialfvEXT = 0;
PFNGLGETFRAGMENTMATERIALIVEXTPROC glGetFragmentMaterialivEXT = 0;
PFNGLLIGHTENVIEXTPROC glLightEnviEXT = 0;

int GL_EXT_fragment_lighting_initialised = 0;

int initialise_GL_EXT_fragment_lighting() {
  if (!isExtensionSupported(str_GL_EXT_fragment_lighting)) return 0;

  glFragmentLightModeliEXT = (PFNGLFRAGMENTLIGHTMODELIEXTPROC)SDL_GL_GetProcAddress("glFragmentLightModeliEXT");
  glFragmentLightModelfEXT = (PFNGLFRAGMENTLIGHTMODELFEXTPROC)SDL_GL_GetProcAddess("glFragmentLightModelfEXT");
  glFragmentLightModelivEXT = (PFNGLFRAGMENTLIGHTMODELIVEXTPROC)SDL_GL_GetProcAddress("glFragmentLightModelivEXT");
  glFragmentLightModelfvEXT = (PFNGLFRAGMENTLIGHTMODELFVEXTPROC)SDL_GL_GetProcAddress("glFragmentLightModelfvEXT");
  glFragmentLightiEXT = (PFNGLFRAGMENTLIGHTIEXTPROC)SDL_GL_GetProcAddress("glFragmentLightiEXT");
  glFragmentLightfEXT = (PFNGLFRAGMENTLIGHTFEXTPROC)SDL_GL_GetProcAddress("glFragmentLightfEXT");
  glFragmentLightivEXT = (PFNGLFRAGMENTLIGHTIVEXTPROC)SDL_GL_GetProcAddress("glFragmentLightivEXT");
  glFragmentLightfvEXT = (PFNGLFRAGMENTLIGHTFVEXTPROC)SDL_GL_GetProcAddress("glFragmentLightfvEXT");
  glGetFragmentLightivEXT = (PFNGLGETFRAGMENTLIGHTIVEXTPROC)SDL_GL_GetProcAddress("glGetFragmentLightivEXT");
  glGetFragmentLightfvEXT = (PFNGLGETFRAGMENTLIGHTFVEXTPROC)SDL_GL_GetProcAddress("glGetFragmentLightfvEXT");
  glFragmentMaterialfEXT = (PFNGLFRAGMENTMATERIALFEXTPROC)SDL_GL_GetProcAddress("glFragmentMaterialfEXT");
  glFragmentMaterialiEXT = (PFNGLFRAGMENTMATERIALIEXTPROC)SDL_GL_GetProcAddress("glFragmentMaterialiEXT");
  glFragmentMaterialfvEXT = (PFNGLFRAGMENTMATERIALFVEXTPROC)SDL_GL_GetProcAddress("glFragmentMaterialfvEXT");
  glFragmentMaterialivEXT = (PFNGLFRAGMENTMATERIALIVEXTPROC)SDL_GL_GetProcAddress("glFragmentMaterialivEXT");
  glFragmentColorMaterialEXT = (PFNGLFRAGMENTCOLORMATERIALEXTPROC)SDL_GL_GetProcAddress("glFragmentColorMaterialEXT");
  glGetFragmentMaterialfvEXT = (PFNGLGETFRAGMENTMATERIALFVEXTPROC)SDL_GL_GetProcAddress("glGetFragmentMaterialfvEXT");
  glGetFragmentMaterialivEXT = (PFNGLGETFRAGMENTMATERIALIVEXTPROC)SDL_GL_GetProcAddress("glGetFragmentMaterialivEXT");
  glLightEnviEXT = (PFNGLLIGHTENVIEXTPROC)SDL_GL_GetProcAddress("glLightEnviEXT");

  GL_EXT_fragment_lighting_initialised = (glFragmentLightModeliEXT && glFragmentLightModelfEXT && glFragmentLightModelivEXT && glFragmentLightModelfvEXT && glFragmentLightiEXT && glFragmentLightfEXT && glFragmentLightivEXT && glFragmentLightfvEXT && glGetFragmentLightivEXT && glGetFragmentLightfvEXT && glFragmentMaterialfEXT && glFragmentMaterialiEXT && glFragmentMaterialfvEXT && glFragmentMaterialivEXT  && glFragmentColorMaterialEXT && glGetFragmentMaterialfvEXT && glGetFragmentMaterialivEXT && glLightEnviEXT);

  return GL_EXT_fragment_lighting_initialised;
}
