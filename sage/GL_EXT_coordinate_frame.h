// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_coordinate_frame
#define GL_EXT_coordinate_frame 1

#include <GL/gl.h>

static const char * const str_GL_EXT_coordinate_frame = "GL_EXT_coordinate_frame";
static int GL_EXT_coordinate_frame_initialised = 0;

typedef void (*PFNGLTANGENT3BEXTPROC)(GLbyte coords);
static PFNGLTANGENT3BEXTPROC glTangent3bEXT = 0;

typedef void (*PFNGLTANGENT3DEXTPROC)(GLdouble coords);
static PFNGLTANGENT3DEXTPROC glTangent3dEXT = 0;

typedef void (*PFNGLTANGENT3FEXTPROC)(GLfloat coords);
static PFNGLTANGENT3FEXTPROC glTangent3fEXT = 0;

typedef void (*PFNGLTANGENT3IEXTPROC)(GLint coords);
static PFNGLTANGENT3IEXTPROC glTangent3iEXT = 0;

typedef void (*PFNGLTANGENT3SEXTPROC)(GLshort coords);
static PFNGLTANGENT3SEXTPROC glTangent3sEXT = 0; 

typedef void (*PFNGLTANGENT3BVEXTPROC)(GLbyte *coords);
static PFNGLTANGENT3BVEXTPROC glTangent3bvEXT = 0;

typedef void (*PFNGLTANGENT3DVEXTPROC)(GLdouble *coords);
static PFNGLTANGENT3DVEXTPROC glTangent3dvEXT = 0;

typedef void (*PFNGLTANGENT3FVEXTPROC)(GLfloat *coords);
static PFNGLTANGENT3FVEXTPROC glTangent3fvEXT = 0;

typedef void (*PFNGLTANGENT3IVEXTPROC)(GLint *coords);
static PFNGLTANGENT3IVEXTPROC glTangent3ivEXT = 0;

typedef void (*PFNGLTANGENT3SVEXTPROC)(GLshort *coords);
static PFNGLTANGENT3SVEXTPROC glTangent3svEXT = 0;

typedef void (*PFNGLBINORMAL3BEXTPROC)(GLbyte coords);
static PFNGLBINORMAL3BEXTPROC glBinormal3bEXT = 0;

typedef void (*PFNGLBINORMAL3DEXTPROC)(GLdouble coords);
static PFNGLBINORMAL3DEXTPROC glBinormal3dEXT = 0;

typedef void (*PFNGLBINORMAL3FEXTPROC)(GLfloat coords);
static PFNGLBINORMAL3FEXTPROC glBinormal3fEXT = 0;

typedef void (*PFNGLBINORMAL3IEXTPROC)(GLint coords);
static PFNGLBINORMAL3IEXTPROC glBinormal3iEXT = 0;

typedef void (*PFNGLBINORMAL3SEXTPROC)(GLshort coords);
static PFNGLBINORMAL3SEXTPROC glBinormal3sEXT = 0;

typedef void (*PFNGLBINORMAL3BVEXTPROC)(GLbyte *coords);
static PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT = 0;

typedef void (*PFNGLBINORMAL3DVEXTPROC)(GLdouble *coords);
static PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT = 0;

typedef void (*PFNGLBINORMAL3FVEXTPROC)(GLfloat *coords);
static PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT = 0;

typedef void (*PFNGLBINORMAL3IVEXTPROC)(GLint *coords);
static PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT = 0;

typedef void (*PFNGLBINORMAL3SVEXTPROC)(GLshort *coords);
static PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT = 0;

typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum type, GLsizei stride, void *pointer);
static PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT = 0;

typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum type, GLsizei stride, void *pointer);
static PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT = 0;

#define GL_TANGENT_ARRAY_EXT               0x8439
#define GL_BINORMAL_ARRAY_EXT              0x843A
#define GL_CURRENT_TANGENT_EXT             0x843B
#define GL_CURRENT_BINORMAL_EXT            0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT          0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT        0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT         0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT       0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT       0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT      0x8443
#define GL_MAP1_TANGENT_EXT                0x8444
#define GL_MAP2_TANGENT_EXT                0x8445
#define GL_MAP1_BINORMAL_EXT               0x8446
#define GL_MAP2_BINORMAL_EXT               0x8447

static int initialise_GL_EXT_coordinate_frame();

#else
static int GL_EXT_coordinate_frame_initialised = 1;
#endif
