// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_EXT_multisample_H
#define WGL_EXT_multisample_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef WGL_EXT_multisample
#define WGL_EXT_multisample 1

typedef void (*PFNWGLSAMPLEMASKEXTPROC)(GLclampf value, GLboolean invert);
typedef void (*PFNWGLSAMPLEPATTERNEXTPROC)(GLenum pattern);

#define WGL_SAMPLE_BUFFERS_EXT               0x2041
#define WGL_SAMPLES_EXT                      0x2042
#define WGL_MULTISAMPLE_EXT                      0x809D
#define WGL_SAMPLE_ALPHA_TO_MASK_EXT             0x809E
#define WGL_SAMPLE_ALPHA_TO_ONE_EXT              0x809F
#define WGL_SAMPLE_MASK_EXT                      0x80A0
#define WGL_MULTISAMPLE_BIT_EXT                  0x20000000
#define WGL_1PASS_EXT                            0x80A1
#define WGL_2PASS_0_EXT                          0x80A2
#define WGL_2PASS_1_EXT                          0x80A3
#define WGL_4PASS_0_EXT                          0x80A4
#define WGL_4PASS_1_EXT                          0x80A5
#define WGL_4PASS_2_EXT                          0x80A6
#define WGL_4PASS_3_EXT                          0x80A7
#define WGL_SAMPLE_BUFFERS_EXT                   0x80A8
#define WGL_SAMPLES_EXT                          0x80A9
#define WGL_SAMPLE_MASK_VALUE_EXT                0x80AA
#define WGL_SAMPLE_MASK_INVERT_EXT               0x80AB
#define WGL_SAMPLE_PATTERN_EXT                   0x80AC

#endif

SAGEAPI PFNWGLSAMPLEMASKEXTPROC wglSampleMaskEXT;
SAGEAPI PFNWGLSAMPLEPATTERNEXTPROC wglSamplePatternEXT;

SAGEAPI int WGL_EXT_multisample_initialised;
SAGEAPI int initialise_WGL_EXT_multisample();

#endif
