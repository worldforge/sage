// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall
//
#ifndef GL_ARB_texture_compression
#define GL_ARB_texture_compression 1

#include <GL/gl.h>

static const char * const str_GL_ARB_texture_compression = "GL_ARB_texture_compression";
static int GL_ARB_texture_compression_initialised = 0;

typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB = 0;

typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB = 0;

typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB = 0;

typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB = 0;


typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB = 0;

typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
static PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB = 0;

typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum target, GLint lod, void *img);
static PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB = 0;

#define COMPRESSED_ALPHA_ARB			0x84E9
#define COMPRESSED_LUMINANCE_ARB		0x84EA
#define COMPRESSED_LUMINANCE_ALPHA_ARB		0x84EB
#define COMPRESSED_INTENSITY_ARB		0x84EC
#define COMPRESSED_RGB_ARB			0x84ED
#define COMPRESSED_RGBA_ARB			0x84EE
#define TEXTURE_COMPRESSION_HINT_ARB		0x84EF
#define TEXTURE_COMPRESSED_IMAGE_SIZE_ARB	0x86A0
#define TEXTURE_COMPRESSED_ARB			0x86A1
#define NUM_COMPRESSED_TEXTURE_FORMATS_ARB	0x86A2
#define COMPRESSED_TEXTURE_FORMATS_ARB		0x86A3  

static int initialise_GL_ARB_texture_compression();

#else
static int GL_ARB_texture_compression_initialised = 1;
#endif
