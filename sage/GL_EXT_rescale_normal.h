// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_rescale_normal
#define GL_EXT_rescale_normal 1

static const char * const str_GL_EXT_rescale_normal = "GL_EXT_rescale_normal";
static int GL_EXT_rescale_normal_initialised = 0;

#define GL_RESCALE_NORMAL_EXT	0x803A

static int initialise_GL_EXT_rescale_normal();
#else
static int GL_EXT_rescale_normal_initialised = 1;
#endif
