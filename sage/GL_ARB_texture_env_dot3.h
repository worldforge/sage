// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_env_dot3_H
#define GL_ARB_texture_env_dot3_H 1

#include <sage/sage.h>

#ifndef GL_ARB_texture_env_dot3
#define GL_ARB_texture_env_dot3 1

#define GL_DOT3_RGB_ARB                                    0x86AE
#define GL_DOT3_RGBA_ARB                                   0x86AF

#endif

SAGEAPI int GL_ARB_texture_env_dot3_initialised;
SAGEAPI int initialise_GL_ARB_texture_env_dot3();

#endif
