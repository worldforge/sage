// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_polygon_offset
#define GL_EXT_polygon_offset 1

#include <GL/gl.h>

static const char * const str_GL_EXT_polygon_offset = "GL_EXT_polygon_offset";
static int GL_EXT_polygon_offset_initialised = 0;

typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat factor, GLfloat bias);
static PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT = 0;

#define GL_POLYGON_OFFSET_EXT               0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT        0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT          0x8039

static int initialise_GL_EXT_polygon_offset();

#else
static int GL_EXT_polygon_offset_initialised = 1;
#endif
