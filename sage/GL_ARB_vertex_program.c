// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_ARB_vertex_program.h"
#include "utility.h"

#include "SDL.h"

static const char * const str_GL_ARB_vertex_program = "GL_ARB_vertex_program";

PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB = 0;
PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB = 0;
PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB = 0;
PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB = 0;
PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB = 0;
PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB = 0;
PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB = 0;
PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB = 0;
PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB = 0;
PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB = 0;
PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB = 0;
PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB = 0;
PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB = 0;
PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB = 0;
PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB = 0;
PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB = 0;
PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB = 0;
PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB = 0;
PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB = 0;
PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB = 0;
PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB = 0;
PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB = 0;
PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB = 0;
PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB = 0;
PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB = 0;
PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB = 0;
PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB = 0;
PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB = 0;
PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB = 0;
PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB = 0;
PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB = 0;
PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB = 0;
PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB = 0;
PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB = 0;
PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB = 0;
PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB = 0;
PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB = 0;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB = 0;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB = 0;
PFNGLPROGRAMSTRINGARBPROC glProgramStringARB = 0;
PFNGLBINDPROGRAMARBPROC glBindProgramARB = 0;
PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB = 0;
PFNGLGENPROGRAMSARBPROC glGenProgramsARB = 0;
PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB = 0;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB = 0;
PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB = 0;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB = 0;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB = 0;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB = 0;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB = 0;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB = 0;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB = 0;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB = 0;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB = 0;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB = 0;
PFNGLGETPROGRAMIVARBPROC glGetProgramivARB = 0;
PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB = 0;
PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB = 0;
PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB = 0;
PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB = 0;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB = 0;
PFNGLISPROGRAMARBPROC glIsProgramARB = 0;

int GL_ARB_vertex_program_initialised = 0;

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
