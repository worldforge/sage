// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_texture_mirror_once_H
#define GL_ATI_texture_mirror_once_H 1

#include <sage/sage.h>

#ifndef GL_ATI_texture_mirror_once
#define GL_ATI_texture_mirror_once 1

#define GL_MIRROR_CLAMP_ATI                     0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI             0x8743

#endif

SAGEAPI int GL_ATI_texture_mirror_once_initialised; 
SAGEAPI int initialise_GL_ATI_texture_mirror_once();

#endif
