// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_env_combine
#define GL_ARB_texture_env_combine 1

static const char * const str_GL_ARB_texture_env_combine = "GL_ARB_texture_env_combine";
static int GL_ARB_texture_env_combine_initialised = 0;

#define GL_COMBINE_ARB                                     0x8570
#define GL_COMBINE_RGB_ARB                                 0x8571
#define GL_COMBINE_ALPHA_ARB                               0x8572
#define GL_SOURCE0_RGB_ARB                                 0x8580
#define GL_SOURCE1_RGB_ARB                                 0x8581
#define GL_SOURCE2_RGB_ARB                                 0x8582
#define GL_SOURCE0_ALPHA_ARB                               0x8588
#define GL_SOURCE1_ALPHA_ARB                               0x8589
#define GL_SOURCE2_ALPHA_ARB                               0x858A
#define GL_OPERAND0_RGB_ARB                                0x8590
#define GL_OPERAND1_RGB_ARB                                0x8591
#define GL_OPERAND2_RGB_ARB                                0x8592
#define GL_OPERAND0_ALPHA_ARB                              0x8598
#define GL_OPERAND1_ALPHA_ARB                              0x8599
#define GL_OPERAND2_ALPHA_ARB                              0x859A
#define GL_RGB_SCALE_ARB                                   0x8573
#define GL_ADD_SIGNED_ARB                                  0x8574
#define GL_INTERPOLATE_ARB                                 0x8575
#define GL_SUBTRACT_ARB                                    0x84E7
#define GL_CONSTANT_ARB                                    0x8576
#define GL_PRIMARY_COLOR_ARB                               0x8577
#define GL_PREVIOUS_ARB                                    0x8578

static int initialise_GL_ARB_texture_env_combine();
#else
static int GL_ARB_texture_env_combine_initialised = 1;
#endif
