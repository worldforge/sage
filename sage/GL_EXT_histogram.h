// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_histogram_H
#define GL_EXT_histogram_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_histogram
#define GL_EXT_histogram 1

typedef void (*PFNGLHISTOGRAMEXTPROC)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (*PFNGLRESETHISTOGRAMEXTPROC)(GLenum target);
typedef void (*PFNGLGETHISTOGRAMEXTPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (*PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (*PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (*PFNGLMINMAXEXTPROC)(GLenum target, GLenum internalformat, GLboolean sink);
typedef void (*PFNGLRESETMINMAXEXTPROC)(GLenum target);
typedef void (*PFNGLGETMINMAXEXTPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (*PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (*PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);

#define GL_HISTOGRAM_EXT                       0x8024
#define GL_PROXY_HISTOGRAM_EXT                 0x8025
#define GL_HISTOGRAM_WIDTH_EXT                 0x8026
#define GL_HISTOGRAM_FORMAT_EXT                0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT              0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT            0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT             0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT            0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT        0x802C
#define GL_HISTOGRAM_SINK_EXT                  0x802D
#define GL_MINMAX_EXT                          0x802E
#define GL_MINMAX_FORMAT_EXT                   0x802F
#define GL_MINMAX_SINK_EXT                     0x8030

#endif

SAGEAPI PFNGLHISTOGRAMEXTPROC glHistogramEXT;
SAGEAPI PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT;
SAGEAPI PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT;
SAGEAPI PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT;
SAGEAPI PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT;
SAGEAPI PFNGLMINMAXEXTPROC glMinmaxEXT;
SAGEAPI PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT;
SAGEAPI PFNGLGETMINMAXEXTPROC glGetMinmaxEXT;
SAGEAPI PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT;
SAGEAPI PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT;

SAGEAPI int GL_EXT_histogram_initialised;
SAGEAPI int initialise_GL_EXT_histogram();

#endif
