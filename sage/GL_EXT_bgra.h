// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_bgra
#define GL_EXT_bgra 1

static const char * const str_GL_EXT_bgra = "GL_EXT_bgra";
static int GL_EXT_bgra_initialised = 0;

#define GL_BGR_EXT 0x80E0
#define GL_BGRA_EXT 0x80E1

static int initialise_GL_EXT_bgra();
#else
static int GL_EXT_bgra_initialised = 1;
#endif
