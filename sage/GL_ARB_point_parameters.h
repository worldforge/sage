// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_point_parameters
#define GL_ARB_point_parameters 1

#include <GL/gl.h>

static const char * const str_GL_ARB_point_parameters = "GL_ARB_point_parameters";
static int GL_ARB_point_parameters_initialised = 0;

typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum pname, GLfloat param);
static PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB = 0;

typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum pname, GLfloat *params);
static PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB = 0;

// Constants
#define GL_POINT_SIZE_MIN_ARB              0x8126
#define GL_POINT_SIZE_MAX_ARB              0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB   0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB  0x8129

static int initialise_GL_ARB_point_parameters();
#else
static int GL_ARB_point_parameters_initialised = 1;
#endif
