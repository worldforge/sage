// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_multisample
#define GL_ARB_multisample 1

#include <GL/gl.h>

static const char * const str_GL_ARB_multisample = "GL_ARB_multisample";
static int GL_ARB_multisample_initialised = 0;

typedef void (*PFNGLSAMPLECOVERAGEARBPROC)(GLfloat value, GLint invert);
static PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB = 0;


#define GLX_SAMPLE_BUFFERS_ARB               100000
#define GLX_SAMPLES_ARB                      100001
#define WGL_SAMPLE_BUFFERS_ARB               0x2041
#define WGL_SAMPLES_ARB                      0x2042
#define GL_MULTISAMPLE_ARB                      0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB         0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB              0x809F
#define GL_SAMPLE_COVERAGE_ARB                  0x80A0
#define GL_MULTISAMPLE_BIT_ARB                  0x20000000
#define GL_SAMPLE_BUFFERS_ARB                   0x80A8
#define GL_SAMPLES_ARB                          0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB            0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB           0x80AB

static int initialise_GL_ARB_multisample();
#else
static int GL_ARB_multisample_initialised = 1;
#endif
