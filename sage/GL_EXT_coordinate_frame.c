// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_coordinate_frame.h"
#include "utility.h"

int initialise_GL_EXT_coordinate_frame() {
  if (!isExtensionSupported(str_GL_EXT_coordinate_frame)) return 0;
 
  glTangent3bEXT = (PFNGLTANGENT3BEXTPROC)SDL_GL_GetProcAddress("glTangent3bEXT");
  glTangent3dEXT = (PFNGLTANGENT3DEXTPROC)SDL_GL_GetProcAddress("glTangent3dEXT");
  glTangent3fEXT = (PFNGLTANGENT3FEXTPROC)SDL_GL_GetProcAddress("glTangent3fEXT");
  glTangent3iEXT = (PFNGLTANGENT3IEXTPROC)SDL_GL_GetProcAddress("glTangent3iEXT");
  glTangent3sEXT = (PFNGLTANGENT3SEXTPROC)SDL_GL_GetProcAddress("glTangent3sEXT");

  glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC)SDL_GL_GetProcAddress("glTangent3bvEXT");
  glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC)SDL_GL_GetProcAddress("glTangent3dvEXT");
  glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC)SDL_GL_GetProcAddress("glTangent3fvEXT");
  glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC)SDL_GL_GetProcAddress("glTangent3ivEXT");
  glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC)SDL_GL_GetProcAddress("glTangent3svEXT");
  
  glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC)SDL_GL_GetProcAddress("glBinormal3bEXT");
  glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC)SDL_GL_GetProcAddress("glBinormal3dEXT");
  glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC)SDL_GL_GetProcAddress("glBinormal3fEXT");
  glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC)SDL_GL_GetProcAddress("glBinormal3iEXT");
  glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC)SDL_GL_GetProcAddress("glBinormal3sEXT");

  glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC)SDL_GL_GetProcAddress("glBinormal3bvEXT");
  glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC)SDL_GL_GetProcAddress("glBinormal3dvEXT");
  glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC)SDL_GL_GetProcAddress("glBinormal3fvEXT");
  glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC)SDL_GL_GetProcAddress("glBinormal3ivEXT");
  glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC)SDL_GL_GetProcAddress("glBinormal3svEXT");

  glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC)SDL_GL_GetProcAddress("glTangentPointerEXT");
  glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC)SDL_GL_GetProcAddress("glBinormalPointerEXT");

  GL_EXT_coordinate_frame_initialised = (glTangent3bEXT && glTangent3dEXT && glTangent3fEXT && glTangent3iEXT && glTangent3sEXT && glTangent3bvEXT && glTangent3dvEXT && glTangent3fvEXT && glTangent3ivEXT && glTangent3svEXT && glBinormal3bEXT && glBinormal3dEXT && glBinormal3fEXT && glBinormal3iEXT && glBinormal3sEXT && glBinormal3bvEXT && glBinormal3dvEXT && glBinormal3fvEXT && glBinormal3ivEXT && glBinormal3svEXT && glTangentPointerEXT && glBinormalPointerEXT); 

  return GL_EXT_coordinate_frame_initialised;
}
