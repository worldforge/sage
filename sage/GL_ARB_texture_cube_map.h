// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_cube_map_H
#define GL_ARB_texture_cube_map_H 1

#include <sage/sage.h>

#ifndef GL_ARB_texture_cube_map
#define GL_ARB_texture_cube_map 1

#define GL_NORMAL_MAP_ARB		0x8511
#define GL_REFLECTION_MAP_ARB		0x8512
#define GL_TEXTURE_CUBE_MAP_ARB		0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB	0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB	0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB	0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB	0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB	0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB	0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB	0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB	0x851B
#define GL_MAX_CUBE_TEXTURE_SIZE_ARB	0x851C

#endif

SAGEAPI int GL_ARB_texture_cube_map_initialised;
SAGEAPI int initialise_GL_ARB_texture_cube_map();

#endif
