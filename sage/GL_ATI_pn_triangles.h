// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_pn_triangles
#define GL_ATI_pn_triangles 1

#include <GL/gl.h>

static const char * const str_GL_ATI_pn_triangles = "GL_ATI_pn_triangles";
static int GL_ATI_pn_triangles_initialised = 0;


typedef void (*PFNGLPNTRIANGLESIATIPROC)(GLenum pname, GLint param);
static PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI = 0;

typedef void (*PFNGLPNTRIANGLESFATIPROC)(GLenum pname, GLfloat param);
static PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI = 0;

#define GL_PN_TRIANGLES_ATI                         0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI   0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI              0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI             0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI       0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI       0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI        0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI      0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI   0x87F8


static int initialise_GL_ATI_pn_triangles();

#else
static int GL_ATI_pn_triangles_initialised = 1;
#endif
