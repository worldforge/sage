// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_vertex_program.h"
#include "utility.h"

int initialise_GL_ARB_vertex_program() {
  if (!isExtensionSupported(str_GL_ARB_vertex_program)) return 0;

  glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1sARB");
  glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1fARB");
  glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1dARB");
  glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2sARB");
  glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2fARB");
  glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2dARB");
  glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3sARB");
  glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3fARB");
  glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3dARB");
  glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4sARB");
  glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4fARB");
  glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4dARB");
  glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NubARB");

  glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1svARB");
  glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1fvARB");
  glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib1dvARB");
  glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2svARB");
  glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2fvARB");
  glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib2dvARB");
  glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3svARB");
  glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3fvARB");
  glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib3dvARB");
  glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4bvARB");
  glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4svARB");
  glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4ivARB");
  glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4ubvARB");
  glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4usvARB");
  glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4uivARB");
  glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4fvARB");
  glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4dvARB");
  glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NbvARB");
  glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NsvARB");
  glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NivARB");
  glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NubvARB");
  glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NusvARB");
  glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC)SDL_GL_GetProcAddress("glVertexAttrib4NuivARB");
  glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)SDL_GL_GetProcAddress("glVertexAttribPointerARB");
  glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)SDL_GL_GetProcAddress("glEnableVertexAttribArrayARB");
  glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)SDL_GL_GetProcAddress("glDisableVertexAttribArrayARB");
  glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)SDL_GL_GetProcAddress("glProgramStringARB");
  glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)SDL_GL_GetProcAddress("glBindProgramARB");
  glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)SDL_GL_GetProcAddress("glDeleteProgramsARB");
  glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)SDL_GL_GetProcAddress("glGenProgramsARB");
  glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4dARB");
  glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4dvARB");
  glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4fARB");
  glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)SDL_GL_GetProcAddress("glProgramEnvParameter4fvARB");
  glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4dARB");
  glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4dvARB");
  glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4fARB");
  glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)SDL_GL_GetProcAddress("glProgramLocalParameter4fvARB");
  glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)SDL_GL_GetProcAddress("glGetProgramEnvParameterdvARB");
  glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)SDL_GL_GetProcAddress("glGetProgramEnvParameterfvARB");
  glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)SDL_GL_GetProcAddress("glGetProgramLocalParameterdvARB");
  glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)SDL_GL_GetProcAddress("glGetProgramLocalParameterfvARB");
  glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)SDL_GL_GetProcAddress("glGetProgramivARB");
  glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)SDL_GL_GetProcAddress("glGetProgramStringARB");
  glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC)SDL_GL_GetProcAddress("glGetVertexAttribdvARB");
  glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC)SDL_GL_GetProcAddress("glGetVertexAttribfvARB");
  glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC)SDL_GL_GetProcAddress("glGetVertexAttribivARB");
  glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)SDL_GL_GetProcAddress("glGetVertexAttribPointervARB");
  glIsProgramARB = (PFNGLISPROGRAMARBPROC)SDL_GL_GetProcAddress("glIsProgramARB");


  GL_ARB_vertex_program_initialised = (glVertexAttrib1sARB && glVertexAttrib1fARB && glVertexAttrib1dARB && glVertexAttrib2sARB && glVertexAttrib2fARB && glVertexAttrib2dARB && glVertexAttrib3sARB && glVertexAttrib3fARB && glVertexAttrib3dARB && glVertexAttrib4sARB && glVertexAttrib4fARB && glVertexAttrib4dARB && glVertexAttrib4NubARB && glVertexAttrib1svARB && glVertexAttrib1fvARB && glVertexAttrib1dvARB && glVertexAttrib2svARB && glVertexAttrib2fvARB && glVertexAttrib2dvARB && glVertexAttrib3svARB && glVertexAttrib3fvARB && glVertexAttrib3dvARB && glVertexAttrib4bvARB && glVertexAttrib4svARB && glVertexAttrib4ivARB && glVertexAttrib4ubvARB && glVertexAttrib4usvARB && glVertexAttrib4uivARB && glVertexAttrib4fvARB && glVertexAttrib4dvARB && glVertexAttrib4NbvARB && glVertexAttrib4NsvARB && glVertexAttrib4NivARB && glVertexAttrib4NubvARB && glVertexAttrib4NusvARB && glVertexAttrib4NuivARB && glVertexAttribPointerARB && glEnableVertexAttribArrayARB && glDisableVertexAttribArrayARB && glProgramStringARB && glBindProgramARB && glDeleteProgramsARB && glGenProgramsARB && glProgramEnvParameter4dARB && glProgramEnvParameter4dvARB && glProgramEnvParameter4fARB && glProgramEnvParameter4fvARB && glProgramLocalParameter4dARB && glProgramLocalParameter4dvARB && glProgramLocalParameter4fARB && glProgramLocalParameter4fvARB && glGetProgramEnvParameterdvARB && glGetProgramEnvParameterfvARB && glGetProgramLocalParameterdvARB && glGetProgramLocalParameterfvARB && glGetProgramivARB && glGetProgramStringARB && glGetVertexAttribdvARB && glGetVertexAttribfvARB && glGetVertexAttribivARB && glGetVertexAttribPointervARB && glIsProgramARB);

  return GL_ARB_vertex_program_initialised;
}
