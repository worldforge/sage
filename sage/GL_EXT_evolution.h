// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_abgr
#define GL_EXT_abgr 1

static const char * const str_GL_EXT_abgr = "GL_EXT_abgr";
static int GL_EXT_abgr_initialised = 0;

#define GL_ABGR_EXT 0x8000

static int initialise_GL_EXT_abgr();

#else
static int GL_EXT_abgr_initialised = 1;
#endif
