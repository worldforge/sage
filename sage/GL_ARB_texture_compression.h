// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_texture_compression_H
#define GL_ARB_texture_compression_H 1

#ifndef GL_ARB_texture_compression
#define GL_ARB_texture_compression 1

#include <GL/gl.h>
#include <sage/sage.h>

typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum target, GLint lod, void *img);

#define GL_COMPRESSED_ALPHA_ARB			0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB		0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB	0x84EB
#define GL_COMPRESSED_INTENSITY_ARB		0x84EC
#define GL_COMPRESSED_RGB_ARB			0x84ED
#define GL_COMPRESSED_RGBA_ARB			0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB		0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB	0x86A0
#define GL_TEXTURE_COMPRESSED_ARB		0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB	0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB	0x86A3  

#endif

SAGEAPI PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;
SAGEAPI PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;
SAGEAPI PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;
SAGEAPI PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;
SAGEAPI PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;
SAGEAPI PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;
SAGEAPI PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;

SAGEAPI int GL_ARB_texture_compression_initialised;
SAGEAPI int initialise_GL_ARB_texture_compression();

#endif
