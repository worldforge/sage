// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_texture_env_combine3
#define GL_ATI_texture_env_combine3 1

static const char * const str_GL_ATI_texture_env_combine3 = "GL_ATI_texture_env_combine3";
static int GL_ATI_texture_env_combine3_initialised = 0;

#define GL_MODULATE_ADD_ATI                   0x8744
#define GL_MODULATE_SIGNED_ADD_ATI            0x8745
#define GL_MODULATE_SUBTRACT_ATI              0x8746

static int initialise_GL_ATI_texture_env_combine3();

#else
static int GL_ATI_texture_env_combine3_initialised = 1;
#endif
