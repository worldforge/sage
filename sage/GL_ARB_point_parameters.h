// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_point_parameters_H
#define GL_ARB_point_parameters_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_point_parameters
#define GL_ARB_point_parameters 1

typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum pname, GLfloat param);
typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum pname, GLfloat *params);

// Constants
#define GL_POINT_SIZE_MIN_ARB              0x8126
#define GL_POINT_SIZE_MAX_ARB              0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB   0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB  0x8129

#endif

SAGEAPI PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB;
SAGEAPI PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB;

SAGEAPI int GL_ARB_point_parameters_initialised;
SAGEAPI int initialise_GL_ARB_point_parameters();

#endif
