// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_shadow
#define GL_ARB_shadow 1

static const char * const str_GL_ARB_shadow = "GL_ARB_shadow";
static int GL_ARB_shadow_initialised = 0;

#define GL_TEXTURE_COMPARE_MODE_ARB	0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB	0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB	0x884E

static int initialise_GL_ARB_shadow();

#else
static int GL_ARB_shadow_initialised = 1;
#endif
