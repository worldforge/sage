// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_3DFX_multisample
#define GL_3DFX_multisample 1

static const char * const str_GL_3DFX_multisample = "GL_3DFX_multisample";
static int GL_3DFX_multisample_initialised = 0;

#define GLX_SAMPLE_BUFFERS_3DFX                     0x8050
#define GLX_SAMPLES_3DFX                            0x8051
#define WGL_SAMPLE_BUFFERS_3DFX                     0x2060
#define WGL_SAMPLES_3DFX                            0x2061
#define GL_MULTISAMPLE_3DFX                            0x86B2
#define GL_SAMPLE_BUFFERS_3DFX                         0x86B3
#define GL_SAMPLES_3DFX                                0x86B4
#define MULTISAMPLE_BIT_3DFX                        0x20000000

static int initialise_GL_3DFX_multisample();

#else
static int GL_3DFX_multisample_initialised = 1;
#endif
