// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef WGL_ARB_render_texture
#define WGL_ARB_render_texture 1

#include <GL/gl.h>

static const char * const str_WGL_ARB_render_texture = "WGL_ARB_render_texture";
static int WGL_ARB_render_texture_initialised = 0;

typedef BOOL (*PFNWGLBINDTEXIMAGEARBPROC)(HPBUFFERARB hPbuffer, GLint iBuffer)
static PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB = 0;

typedef BOOL (*PFNWGLRELEASETEXIMAGEARBPROC)(HPBUFFERARB hPbuffer, GLint iBuffer)
static PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB = 0;

typedef BOOL (*PFNWGLSETPBUFFERATTRIBARBPROC)(HPBUFFERARB hPbuffer, const GLint *piAttribList)
static PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB = 0;


#define WGL_BIND_TO_TEXTURE_RGB_ARB         0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB        0x2071
#define WGL_TEXTURE_FORMAT_ARB              0x2072
#define WGL_TEXTURE_TARGET_ARB              0x2073
#define WGL_MIPMAP_TEXTURE_ARB              0x2074
#define WGL_TEXTURE_RGB_ARB                 0x2075
#define WGL_TEXTURE_RGBA_ARB                0x2076
#define WGL_NO_TEXTURE_ARB                  0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB            0x2078
#define WGL_TEXTURE_1D_ARB                  0x2079
#define WGL_TEXTURE_2D_ARB                  0x207A
#define WGL_NO_TEXTURE_ARB                  0x2077
#define WGL_MIPMAP_LEVEL_ARB                0x207B
#define WGL_CUBE_MAP_FACE_ARB               0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB     0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB     0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB     0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB     0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB     0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB     0x2082
#define WGL_FRONT_LEFT_ARB                  0x2083
#define WGL_FRONT_RIGHT_ARB                 0x2084
#define WGL_BACK_LEFT_ARB                   0x2085
#define WGL_BACK_RIGHT_ARB                  0x2086
#define WGL_AUX0_ARB                        0x2087
#define WGL_AUX1_ARB                        0x2088
#define WGL_AUX2_ARB                        0x2089
#define WGL_AUX3_ARB                        0x208A
#define WGL_AUX4_ARB                        0x208B
#define WGL_AUX5_ARB                        0x208C
#define WGL_AUX6_ARB                        0x208D
#define WGL_AUX7_ARB                        0x208E
#define WGL_AUX8_ARB                        0x208F
#define WGL_AUX9_ARB                        0x2090

static int initialise_WGL_ARB_render_texture();

#else
static int WGL_ARB_render_texture_initialised = 1;
#endif
