// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_index_material_H
#define GL_EXT_index_material_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_index_material
#define GL_EXT_index_material 1

typedef void (*PFNGLINDEXMATERIALEXTPROC)(GLenum face, GLenum mode);

#define GL_INDEX_MATERIAL_EXT             0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT   0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT        0x81BA
	
#endif

SAGEAPI PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT;

SAGEAPI int GL_EXT_index_material_initialised;
SAGEAPI int initialise_GL_EXT_index_material();

#endif
