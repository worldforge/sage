// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_border_clamp
#define GL_ARB_texture_border_clamp 1

static const char * const str_GL_ARB_texture_border_clamp = "GL_ARB_texture_border_clamp";
static int GL_ARB_texture_border_clamp_initialised = 0;

#define GL_CLAMP_TO_BORDER_ARB	0x812D

static int initialise_GL_ARB_texture_border_clamp();
#else
static int GL_ARB_texture_border_clamp_initialised = 1;
#endif
