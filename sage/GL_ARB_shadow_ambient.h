// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_shadow_ambient
#define GL_ARB_shadow_ambient 1

static const char * const str_GL_ARB_shadow_ambient = "GL_ARB_shadow_ambient";
static int GL_ARB_shadow_ambient_initialised = 0;

#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB  0x80BF

static int initialise_GL_ARB_shadow_ambient();
#else
static int GL_ARB_shadow_ambient_initialised = 1;
#endif
