// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_texture_compression.h"
#include "utility.h"

int initialise_GL_ARB_texture_compression() {
  if (isExtensionSupported(str_GL_ARB_texture_compression)) {
    return 0;
  }
  
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
