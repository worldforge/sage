// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_scene_marker.h"
#include "utility.h"

static const char * const str_GL_EXT_scene_marker = "GL_EXT_scene_marker";

PFNGLBEGINSCENEEXTPROC glBeginSceneEXT = 0;
PFNGLENDSCENEEXTPROC glEndSceneEXT = 0;

int GL_EXT_scene_marker_initialised = 0;

int initialise_GL_EXT_scene_marker() {
  if (!isExtensionSupported(str_GL_EXT_scene_marker)) return 0;

  glBeginSceneEXT = (PFNGLBEGINSCENEEXTPROC)SDL_GL_GetProcAddress("glBeginSceneEXT");
  glEndSceneEXT = (PFNGLENDSCENEEXTPROC)SDL_GL_GetProcAddress("glEndSceneEXT");
 
  GL_EXT_scene_marker_initialised = (glBeginSceneEXT && glEndSceneEXT);
  
  return GL_EXT_scene_marker_initialised;
}
