// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_env_dot3
#define GL_ARB_texture_env_dot3 1

static const char * const str_GL_ARB_texture_env_dot3 = "GL_ARB_texture_env_dot3";
static int GL_ARB_texture_env_dot3_initialised = 0;

#define GL_DOT3_RGB_ARB                                    0x86AE
#define GL_DOT3_RGBA_ARB                                   0x86AF

static int initialise_GL_ARB_texture_env_dot3();
#else
static int GL_ARB_texture_env_dot3_initialised = 1;
#endif
