// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_texture_mirror_once
#define GL_ATI_texture_mirror_once 1

static const char * const str_GL_ATI_texture_mirror_once = "GL_ATI_texture_mirror_once";
static int GL_ATI_texture_mirror_once_initialised = 0;

#define GL_MIRROR_CLAMP_ATI                     0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI             0x8743
	  
static int initialise_GL_ATI_texture_mirror_once();

#else
static int GL_ATI_texture_mirror_once_initialised = 1;
#endif
