// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_pixel_transform_H
#define GL_EXT_pixel_transform_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_pixel_transform
#define GL_EXT_pixel_transform 1

typedef void (*PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum target, GLenum pname, const GLint param);
typedef void (*PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum target, GLenum pname, const GLfloat param);
typedef void (*PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (*PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (*PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (*PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);

#define GL_PIXEL_TRANSFORM_2D_EXT                         0x8330
#define GL_PIXEL_MAG_FILTER_EXT                           0x8331
#define GL_PIXEL_MIN_FILTER_EXT                           0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT                         0x8333
#define GL_CUBIC_EXT                                      0x8334
#define GL_AVERAGE_EXT                                    0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT             0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT         0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT                  0x8338

#endif

SAGEAPI PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT;
SAGEAPI PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT;
SAGEAPI PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT;
SAGEAPI PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT;
//SAGEAPI PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC glGetPixelTransformParameterivEXT;
//SAGEAPI PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC glGetPixelTransformParameterfvEXT;

SAGEAPI int GL_EXT_pixel_transform_initialised;
SAGEAPI int initialise_GL_EXT_pixel_transform();

#endif
