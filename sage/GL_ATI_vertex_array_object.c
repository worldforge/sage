// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ATI_vertex_array_object.h"
#include "utility.h"

static int initialise_GL_ATI_vertex_array_object() {
  if (!isExtensionSupported(str_GL_ATI_vertex_array_object)) return 0;
 
  glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC)SDL_GL_GetProcAddress("glNewObjectBufferATI");
  glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC)SDL_GL_GetProcAddress("glIsObjectBufferATI");
  glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)SDL_GL_GetProcAddress("glUpdateObjectBufferATI");
  glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC)SDL_GL_GetProcAddress("glGetObjectBufferfvATI");
  glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC)SDL_GL_GetProcAddress("glGetObjectBufferivATI");
  glDeleteObjectBufferATI = (PFNGLDELETEOBJECTBUFFERATIPROC)SDL_GL_GetProcAddress("glDeleteObjectBufferATI");
  glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC)SDL_GL_GetProcAddress("glArrayObjectATI");
  glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC)SDL_GL_GetProcAddress("glGetArrayObjectfvATI");
  glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC)SDL_GL_GetProcAddress("glGetArrayObjectivATI");
  glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)SDL_GL_GetProcAddress("glVariantArrayObjectATI");
  glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)SDL_GL_GetProcAddress("glGetVariantArrayObjectfvATI");
  glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)SDL_GL_GL_GetProcAddress("glGetVariantArrayObjectivATI");

 GL_ATI_vertex_array_object_initialised = (glNewObjectBufferATI && glIsObjectBufferATI && glUpdateObjectBufferATI && glGetObjectBufferfvATI && glGetObjectBufferivATI && glDeleteObjectBufferATI && glArrayObjectATI && glGetArrayObjectfvATI && glGetArrayObjectivATI && glVariantArrayObjectATI && glGetVariantArrayObjectfvATI && glGetVariantArrayObjectivATI); 

  return GL_ATI_vertex_array_object_initialised;
}
