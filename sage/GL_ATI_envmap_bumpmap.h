// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_envmap_bumpmap_H
#define GL_ATI_envmap_bumpmap_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ATI_envmap_bumpmap
#define GL_ATI_envmap_bumpmap 1

typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);
typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);
typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);
typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);

#define GL_BUMP_ROT_MATRIX_ATI            0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI       0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI         0x8777
#define GL_BUMP_TEX_UNITS_ATI             0x8778
#define GL_DUDV_ATI                       0x8779
#define GL_DU8DV8_ATI                     0x877A
#define GL_BUMP_ENVMAP_ATI                0x877B
#define GL_BUMP_TARGET_ATI                0x877C

#endif

SAGEAPI PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI;
SAGEAPI PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI;
SAGEAPI PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI;
SAGEAPI PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI;

SAGEAPI int GL_ATI_envmap_bumpmap_initialised;
SAGEAPI int initialise_GL_ATI_envmap_bumpmap();

#endif
