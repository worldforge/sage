// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_SGIS_generate_mipmap
#define GL_SGIS_generate_mipmap 1

static const char * const str_GL_SGIS_generate_mipmap = "GL_SGIS_generate_mipmap";
static int GL_SGIS_generate_mipmap_initialised = 0;

#define GL_GENERATE_MIPMAP_SGIS            0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS       0x8192

static int initialise_GL_SGIS_generate_mipmap();
#else
static int GL_SGIS_generate_mipmap_initialised = 1;
#endif
