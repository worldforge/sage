// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_compression.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_texture_compression = "GL_ARB_texture_compression";

PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB = 0;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB = 0;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB = 0;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB = 0;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB = 0;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB = 0;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB = 0;

int GL_ARB_texture_compression_initialised = 0; 

int initialise_GL_ARB_texture_compression() {
  if (isExtensionSupported(str_GL_ARB_texture_compression)) return 0;
  
  glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)SDL_GL_GetProcAddress("glCompressedTexImage3DARB");
  glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)SDL_GL_GetProcAddress("glCompressedTexImage2DARB");
  glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)SDL_GL_GetProcAddress("glCompressedTexImage1DARB");
 glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)SDL_GL_GetProcAddress("glCompressedTexSubImage3DARB");
  glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)SDL_GL_GetProcAddress("glCompressedTexSubImage2DARB");
  glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)SDL_GL_GetProcAddress("glCompressedTexSubImage1DARB");
  glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)SDL_GL_GetProcAddress("glGetCompressedTexImageARB");

  GL_ARB_texture_compression_initialised = (glCompressedTexImage3DARB && glCompressedTexImage2DARB && glCompressedTexImage1DARB && glCompressedTexSubImage3DARB && glCompressedTexSubImage2DARB && glCompressedTexSubImage1DARB && glGetCompressedTexImageARB);

  return GL_ARB_texture_compression_initialised;
}
