// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_texture_H
#define GL_EXT_texture_H 1

#include <sage/sage.h>

#ifndef GL_EXT_texture
#define GL_EXT_texture 1

#define GL_ALPHA4_EXT       0x803B
#define GL_ALPHA8_EXT       0x803C
#define GL_ALPHA12_EXT      0x803D
#define GL_ALPHA16_EXT      0x803E
#define GL_LUMINANCE4_EXT   0x803F
#define GL_LUMINANCE8_EXT   0x8040
#define GL_LUMINANCE12_EXT  0x8041
#define GL_LUMINANCE16_EXT  0x8042
#define GL_LUMINANCE4_ALPHA4_EXT    0x8043
#define GL_LUMINANCE6_ALPHA2_EXT    0x8044
#define GL_LUMINANCE8_ALPHA8_EXT    0x8045
#define GL_LUMINANCE12_ALPHA4_EXT   0x8046
#define GL_LUMINANCE12_ALPHA12_EXT  0x8047
#define GL_LUMINANCE16_ALPHA16_EXT  0x8048
#define GL_INTENSITY_EXT    0x8049
#define GL_INTENSITY4_EXT   0x804A
#define GL_INTENSITY8_EXT   0x804B
#define GL_INTENSITY12_EXT  0x804C
#define GL_INTENSITY16_EXT  0x804D
#define GL_RGB2_EXT 0x804E
#define GL_RGB4_EXT 0x804F
#define GL_RGB5_EXT 0x8050
#define GL_RGB8_EXT 0x8051
#define GL_RGB10_EXT0x8052
#define GL_RGB12_EXT0x8053
#define GL_RGB16_EXT0x8054
#define GL_RGBA2_EXT0x8055
#define GL_RGBA4_EXT0x8056
#define GL_RGB5_A1_EXT      0x8057
#define GL_RGBA8_EXT0x8058
#define GL_RGB10_A2_EXT     0x8059
#define GL_RGBA12_EXT       0x805A
#define GL_RGBA16_EXT       0x805B
#define GL_TEXTURE_RED_SIZE_EXT     0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT   0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT    0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT   0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT       0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT       0x8061
#define GL_REPLACE_EXT      0x8062
#define GL_PROXY_TEXTURE_1D_EXT     0x8063
#define GL_PROXY_TEXTURE_2D_EXT     0x8064

#endif

SAGEAPI int GL_EXT_texture_initialised;
SAGEAPI int initialise_GL_EXT_texture();

#endif
