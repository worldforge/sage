// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_convolution_H
#define GL_EXT_convolution_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_convolution
#define GL_EXT_convolution 1

typedef void (*PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void* image);
typedef void (*PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* image);
typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (*PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum target, GLenum format, GLenum type, void* image); 
typedef void (*PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* row, const void* column);
typedef void (*PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum target, GLenum format, GLenum type, void* row, void* column, void* span); 
typedef void (*PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum target, GLenum pname, GLint param);
typedef void (*PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (*PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (*PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);

#define GL_CONVOLUTION_1D_EXT               0x8010
#define GL_CONVOLUTION_2D_EXT               0x8011
#define GL_SEPARABLE_2D_EXT                 0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT      0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT     0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT      0x8015
#define GL_REDUCE_EXT                       0x8016
#define GL_CONVOLUTION_FORMAT_EXT           0x8017
#define GL_CONVOLUTION_WIDTH_EXT            0x8018
#define GL_CONVOLUTION_HEIGHT_EXT           0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT        0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT       0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT   0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT  0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT    0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT  0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT   0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT  0x8023

#endif

SAGEAPI PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT;
SAGEAPI PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT;
SAGEAPI PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT;
SAGEAPI PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT;
SAGEAPI PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT;
SAGEAPI PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT;
SAGEAPI PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT;
SAGEAPI PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT;
SAGEAPI PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT;
SAGEAPI PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT;
SAGEAPI PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT; 
SAGEAPI PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT;
SAGEAPI PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT;

SAGEAPI int GL_EXT_convolution_initialised;
SAGEAPI int initialise_GL_EXT_convolution();

#endif
