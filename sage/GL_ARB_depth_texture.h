// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_depth_texture
#define GL_ARB_depth_texture 1

static const char * const str_GL_ARB_depth_texture = "GL_ARB_depth_texture";
static int GL_ARB_depth_texture_initialised = 0;

#define GL_DEPTH_COMPONENT16_ARB	0x81A5
#define GL_DEPTH_COMPONENT24_ARB	0x81A6
#define GL_DEPTH_COMPONENT32_ARB	0x81A7

#define GL_TEXTURE_DEPTH_SIZE_ARB	0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB	0x884B

static int initialise_GL_ARB_depth_texture();
#else
static int GL_ARB_depth_texture_initialised = 1;
#endif
