// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_point_parameters_H
#define GL_EXT_point_parameters_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_point_parameters
#define GL_EXT_point_parameters 1
        
typedef void (*PFNGLPOINTPARAMETERFEXTPROC)(GLenum pname, GLfloat param);
typedef void (*PFNGLPOINTPARAMETERFVEXTPROC)(GLenum pname, GLfloat *params);

#define GL_POINT_SIZE_MIN_EXT              0x8126
#define GL_POINT_SIZE_MAX_EXT              0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT   0x8128
#define GL_DISTANCE_ATTENUATION_EXT        0x8129

#endif

SAGEAPI PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT;
SAGEAPI PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT;

SAGEAPI int GL_EXT_point_paramaters_initialised;
SAGEAPI int initialise_GL_EXT_point_paramaters();

#endif
