// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_envmap_bumpmap
#define GL_ATI_envmap_bumpmap 1

#include <GL/gl.h>

static const char * const str_GL_ATI_envmap_bumpmap = "GL_ATI_envmap_bumpmap";
static int GL_ATI_envmap_bumpmap_initialised = 0;

typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);
static PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI = 0;

typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);
static PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI = 0;

typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);
static PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI = 0;

typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);
static PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI = 0;


#define GL_BUMP_ROT_MATRIX_ATI            0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI       0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI         0x8777
#define GL_BUMP_TEX_UNITS_ATI             0x8778
#define GL_DUDV_ATI                       0x8779
#define GL_DU8DV8_ATI                     0x877A
#define GL_BUMP_ENVMAP_ATI                0x877B
#define GL_BUMP_TARGET_ATI                0x877C

static int initialise_GL_ATI_envmap_bumpmap();

#else
static int GL_ATI_envmap_bumpmap_initialised = 1;
#endif
