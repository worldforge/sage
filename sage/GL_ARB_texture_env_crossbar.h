// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_env_crossbar
#define GL_ARB_texture_env_crossbar 1

static const char * const str_GL_ARB_texture_env_crossbar = "GL_ARB_texture_env_crossbar";
static int GL_ARB_texture_env_crossbar_initialised = 0;

// These can go from 0 to MAX_TEXTURE_UNITS_ARB
// Defined 32 initially

#define GL_TEXTURE0_ARB                        0x84C0
#define GL_TEXTURE1_ARB                        0x84C1
#define GL_TEXTURE2_ARB                        0x84C2
#define GL_TEXTURE3_ARB                        0x84C3
#define GL_TEXTURE4_ARB                        0x84C4
#define GL_TEXTURE5_ARB                        0x84C5
#define GL_TEXTURE6_ARB                        0x84C6
#define GL_TEXTURE7_ARB                        0x84C7
#define GL_TEXTURE8_ARB                        0x84C8
#define GL_TEXTURE9_ARB                        0x84C9
#define GL_TEXTURE10_ARB                        0x84CA
#define GL_TEXTURE11_ARB                        0x84CB
#define GL_TEXTURE12_ARB                        0x84CC
#define GL_TEXTURE13_ARB                        0x84CD
#define GL_TEXTURE14_ARB                        0x84CE
#define GL_TEXTURE15_ARB                        0x84CF
#define GL_TEXTURE16_ARB                        0x84D0
#define GL_TEXTURE17_ARB                        0x84D1
#define GL_TEXTURE18_ARB                        0x84D2
#define GL_TEXTURE19_ARB                        0x84D3
#define GL_TEXTURE20_ARB                        0x84D4
#define GL_TEXTURE21_ARB                        0x84D5
#define GL_TEXTURE22_ARB                        0x84D6
#define GL_TEXTURE23_ARB                        0x84D7
#define GL_TEXTURE24_ARB                        0x84D8
#define GL_TEXTURE25_ARB                        0x84D9
#define GL_TEXTURE26_ARB                        0x84DA
#define GL_TEXTURE27_ARB                        0x84DB
#define GL_TEXTURE28_ARB                        0x84DC
#define GL_TEXTURE29_ARB                        0x84DD
#define GL_TEXTURE30_ARB                        0x84DE
#define GL_TEXTURE31_ARB                        0x84DF



static int initialise_GL_ARB_texture_env_crossbar();

#else
static int GL_ARB_texture_env_crossbar_initialised = 1;
#endif
