// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_depth_texture_H
#define GL_ARB_depth_texture_H 1

#include <sage/sage.h>

#ifndef GL_ARB_depth_texture
#define GL_ARB_depth_texture 1

#define GL_DEPTH_COMPONENT16_ARB	0x81A5
#define GL_DEPTH_COMPONENT24_ARB	0x81A6
#define GL_DEPTH_COMPONENT32_ARB	0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB	0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB	0x884B

#endif
	
SAGEAPI int GL_ARB_depth_texture_initialised;
SAGEAPI int initialise_GL_ARB_depth_texture();

#endif
