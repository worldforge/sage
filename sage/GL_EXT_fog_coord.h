// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_fog_coord_H
#define GL_EXT_fog_coord_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_fog_coord
#define GL_EXT_fog_coord 1

typedef void (*PFNGLFOGCOORDFEXTPROC)(GLfloat coord);
typedef void (*PFNGLFOGCOORDDEXTPROC)(GLdouble coord);
typedef void (*PFNGLFOGCOORDFVEXTPROC)(GLfloat *coord);
typedef void (*PFNGLFOGCOORDDVEXTPROC)(GLdouble *coord);
typedef void (*PFNGLFOGCOORDPOINTEREXTPROC)(GLenum type, GLsizei stride, GLvoid *pointer);

#define GL_FOG_COORDINATE_SOURCE_EXT           0x8450
#define GL_FOG_COORDINATE_EXT                  0x8451
#define GL_FRAGMENT_DEPTH_EXT                  0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT          0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT       0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT     0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT    0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT            0x8457

#endif

SAGEAPI PFNGLFOGCOORDFEXTPROC glFogCoordfEXT;
SAGEAPI PFNGLFOGCOORDDEXTPROC glFogCoorddEXT;
SAGEAPI PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT;
SAGEAPI PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT;
SAGEAPI PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;

SAGEAPI int GL_EXT_fog_coord_initialised;
SAGEAPI int initialise_GL_EXT_fog_coord();

#endif
