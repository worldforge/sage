// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_secondary_color_H
#define GL_EXT_secondary_color_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_secondary_color
#define GL_EXT_secondary_color 1

typedef void (*PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (*PFNGLSECONDARYCOLOR3BVEXTPROC)(GLbyte *v);
typedef void (*PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (*PFNGLSECONDARYCOLOR3DVEXTPROC)(GLdouble *v);
typedef void (*PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (*PFNGLSECONDARYCOLOR3FVEXTPROC)(GLfloat *v);
typedef void (*PFNGLSECONDARYCOLOR3IEXTPROC)(GLint red, GLint green, GLint blue);
typedef void (*PFNGLSECONDARYCOLOR3IVEXTPROC)(GLint *v);
typedef void (*PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (*PFNGLSECONDARYCOLOR3SVEXTPROC)(GLshort *v);
typedef void (*PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (*PFNGLSECONDARYCOLOR3UBVEXTPROC)(GLubyte *v);
typedef void (*PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (*PFNGLSECONDARYCOLOR3UIVEXTPROC)(GLuint *v);
typedef void (*PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (*PFNGLSECONDARYCOLOR3USVEXTPROC)(GLushort *v);
typedef void (*PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);

#define GL_COLOR_SUM_EXT                       0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT         0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT      0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT      0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT    0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT   0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT           0x845E

#endif

SAGEAPI PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT;
SAGEAPI PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT;
SAGEAPI PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT;
SAGEAPI PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT;
SAGEAPI PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT;
SAGEAPI PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT;
SAGEAPI PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT;
SAGEAPI PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT;
SAGEAPI PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT;
SAGEAPI PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT;
SAGEAPI PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT;
SAGEAPI PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT;
SAGEAPI PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT;
SAGEAPI PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT;
SAGEAPI PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT;
SAGEAPI PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT;
SAGEAPI PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT;

SAGEAPI int GL_EXT_secondary_color_initialised;
SAGEAPI int initialise_GL_EXT_secondary_color();

#endif
