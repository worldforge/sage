// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_NV_register_combiners.h"
#include "utility.h"

static int initialise_GL_NV_register_combiners() {
  if (isExtensionSupported(str_GL_NV_register_combiners)) {
    return 0;
  }  
  glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glCombinerParameterfvNV");
  glCombinerParameterivNV =(PFNGLCOMBINERPARAMETERIVNVPROC)SDL_GL_GetProcAddress("glCombinerParameterivNV");
  glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC)SDL_GL_GetProcAddress("glCombinerParameterfNV");
  glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC)SDL_GL_GetProcAddress("glCombinerParameteriNV");
  glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC)SDL_GL_GetProcAddress("glCombinerInputNV");
  glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC)SDL_GL_GetProcAddress("glCombinerOutputNV");
  glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC)SDL_GL_GetProcAddress("glFinalCombinerInputNV");
  glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glGetCombinerInputParameterfvNV");
  glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)SDL_GL_GetProcAddress("glGetCombinerInputParameterivNV");
  glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glGetCombinerOutputParameterfvNV");
  glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)SDL_GL_GetProcAddress("glGetCombinerOutputParameterivNV");
  glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)SDL_GL_GetProcAddress("glGetFinalCombinerInputParameterfvNV");
  glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)SDL_GL_GetProcAddress("glGetFinalCombinerInputParameterivNV");

  GL_NV_register_combiners_initialised = (glCombinerParameterfvNV && glCombinerParameterivNV && glCombinerParameterfNV && glCombinerParameteriNV && glCombinerInputNV && glCombinerOutputNV && glFinalCombinerInputNV && glGetCombinerInputParameterfvNV && glGetCombinerInputParameterivNV && glGetCombinerOutputParameterfvNV && glGetCombinerOutputParameterivNV && glGetFinalCombinerInputParameterfvNV && glGetFinalCombinerInputParameterivNV);
  return GL_NV_register_combiners_initialised;
}
