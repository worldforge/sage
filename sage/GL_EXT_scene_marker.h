// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_scene_marker_H
#define GL_EXT_scene_marker_H 1

#include <sage/sage.h>

#ifndef GL_EXT_scene_marker
#define GL_EXT_scene_marker 1

typedef void (*PFNGLBEGINSCENEEXTPROC)(void);
typedef void (*PFNGLENDSCENEEXTPROC)(void);
    
#endif

SAGEAPI PFNGLBEGINSCENEEXTPROC glBeginSceneEXT;
SAGEAPI PFNGLENDSCENEEXTPROC glEndSceneEXT;

SAGEAPI int GL_EXT_scene_marker_initialised;
SAGEAPI int initialise_GL_EXT_scene_marker();

#endif
