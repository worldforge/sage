// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_coordinate_frame_H
#define GL_EXT_coordinate_frame_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_coordinate_frame
#define GL_EXT_coordinate_frame 1

typedef void (*PFNGLTANGENT3BEXTPROC)(GLbyte coords);
typedef void (*PFNGLTANGENT3DEXTPROC)(GLdouble coords);
typedef void (*PFNGLTANGENT3FEXTPROC)(GLfloat coords);
typedef void (*PFNGLTANGENT3IEXTPROC)(GLint coords);
typedef void (*PFNGLTANGENT3SEXTPROC)(GLshort coords);
typedef void (*PFNGLTANGENT3BVEXTPROC)(GLbyte *coords);
typedef void (*PFNGLTANGENT3DVEXTPROC)(GLdouble *coords);
typedef void (*PFNGLTANGENT3FVEXTPROC)(GLfloat *coords);
typedef void (*PFNGLTANGENT3IVEXTPROC)(GLint *coords);
typedef void (*PFNGLTANGENT3SVEXTPROC)(GLshort *coords);
typedef void (*PFNGLBINORMAL3BEXTPROC)(GLbyte coords);
typedef void (*PFNGLBINORMAL3DEXTPROC)(GLdouble coords);
typedef void (*PFNGLBINORMAL3FEXTPROC)(GLfloat coords);
typedef void (*PFNGLBINORMAL3IEXTPROC)(GLint coords);
typedef void (*PFNGLBINORMAL3SEXTPROC)(GLshort coords);
typedef void (*PFNGLBINORMAL3BVEXTPROC)(GLbyte *coords);
typedef void (*PFNGLBINORMAL3DVEXTPROC)(GLdouble *coords);
typedef void (*PFNGLBINORMAL3FVEXTPROC)(GLfloat *coords);
typedef void (*PFNGLBINORMAL3IVEXTPROC)(GLint *coords);
typedef void (*PFNGLBINORMAL3SVEXTPROC)(GLshort *coords);
typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum type, GLsizei stride, void *pointer);
typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum type, GLsizei stride, void *pointer);

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

#endif

SAGEAPI PFNGLTANGENT3BEXTPROC glTangent3bEXT;
SAGEAPI PFNGLTANGENT3DEXTPROC glTangent3dEXT;
SAGEAPI PFNGLTANGENT3FEXTPROC glTangent3fEXT;
SAGEAPI PFNGLTANGENT3IEXTPROC glTangent3iEXT;
SAGEAPI PFNGLTANGENT3SEXTPROC glTangent3sEXT; 
SAGEAPI PFNGLTANGENT3BVEXTPROC glTangent3bvEXT;
SAGEAPI PFNGLTANGENT3DVEXTPROC glTangent3dvEXT;
SAGEAPI PFNGLTANGENT3FVEXTPROC glTangent3fvEXT;
SAGEAPI PFNGLTANGENT3IVEXTPROC glTangent3ivEXT;
SAGEAPI PFNGLTANGENT3SVEXTPROC glTangent3svEXT;
SAGEAPI PFNGLBINORMAL3BEXTPROC glBinormal3bEXT;
SAGEAPI PFNGLBINORMAL3DEXTPROC glBinormal3dEXT;
SAGEAPI PFNGLBINORMAL3FEXTPROC glBinormal3fEXT;
SAGEAPI PFNGLBINORMAL3IEXTPROC glBinormal3iEXT;
SAGEAPI PFNGLBINORMAL3SEXTPROC glBinormal3sEXT;
SAGEAPI PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT;
SAGEAPI PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT;
SAGEAPI PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT;
SAGEAPI PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT;
SAGEAPI PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT;
SAGEAPI PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT;
SAGEAPI PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT;

SAGEAPI int GL_EXT_coordinate_frame_initialised;
SAGEAPI int initialise_GL_EXT_coordinate_frame();

#endif
