// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_polygon_offset_H
#define GL_EXT_polygon_offset_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_polygon_offset
#define GL_EXT_polygon_offset 1

typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat factor, GLfloat bias);

#define GL_POLYGON_OFFSET_EXT               0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT        0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT          0x8039

#endif

SAGEAPI PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;

SAGEAPI int GL_EXT_polygon_offset_initialised;
SAGEAPI int initialise_GL_EXT_polygon_offset();

#endif
