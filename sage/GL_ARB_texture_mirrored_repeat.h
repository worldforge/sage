// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_mirrored_repeat
#define GL_ARB_texture_mirrored_repeat 1

static const char * const str_GL_ARB_texture_mirrored_repeat = "GL_ARB_texture_mirrored_repeat";
static int GL_ARB_texture_mirrored_repeat_initialised = 0;

#define GL_MIRRORED_REPEAT_ARB			0x8370

static int initialise_GL_ARB_texture_mirrored_repeat();
#else
static int GL_ARB_texture_mirrored_repeat_initialised = 1;
#endif
