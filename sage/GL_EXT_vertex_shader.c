// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#include "GL_EXT_vertex_shader.h"
#include "utility.h"

static const char * const str_GL_EXT_vertex_shader = "GL_EXT_vertex_shader";

PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT = 0;
PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT = 0;
PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT = 0;
PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT = 0;
PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT = 0;
PFNGLSHADEROP1EXTPROC glShaderOp1EXT = 0;
PFNGLSHADEROP2EXTPROC glShaderOp2EXT = 0;
PFNGLSHADEROP3EXTPROC glShaderOp3EXT = 0;
PFNGLSWIZZLEEXTPROC glSwizzleEXT = 0;
PFNGLWRITEMASKEXTPROC glWriteMaskEXT = 0;
PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT = 0;
PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT = 0;
PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT = 0;
PFNGLSETINVARIANTEXTPROC glSetInvariantEXT = 0;
PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT = 0;
PFNGLVARIANTBVEXTPROC glVariantbvEXT = 0;
PFNGLVARIANTSVEXTPROC glVariantsvEXT = 0;
PFNGLVARIANTIVEXTPROC glVariantivEXT = 0;
PFNGLVARIANTFVEXTPROC glVariantfvEXT = 0;
PFNGLVARIANTDVEXTPROC glVariantdvEXT = 0;
PFNGLVARIANTUBVEXTPROC glVariantubvEXT = 0;
PFNGLVARIANTUSVEXTPROC glVariantusvEXT = 0;
PFNGLVARIANTUIVEXTPROC glVariantuivEXT = 0;
PFNGLVARIANTPOGLINTEREXTPROC glVariantPoGLinterEXT = 0;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT = 0;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT = 0;
PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT = 0;
PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT = 0;
PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT = 0;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT = 0;
PFNGLBINDPARAMETEREXTPROC glBindParameterEXT = 0;
PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT = 0;
PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT = 0;
PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT = 0;
PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT = 0;
PFNGLGETVARIANTPOGLINTERVEXTPROC glGetVariantPoGLintervEXT = 0;
PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT = 0;
PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT = 0;
PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT = 0;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT = 0;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT = 0;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT = 0;

int GL_EXT_vertex_shader_initialised = 0;

int initialise_GL_EXT_vertex_shader() {
  if (!isExtensionSupported(str_GL_EXT_vertex_shader)) return 0;

  glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC)SDL_GL_GetProcAddress("glBeginVertexShaderEXT");
  glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC)SDL_GL_GetProcAddress("glEndVertexShaderEXT");
  glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC)SDL_GL_GetProcAddress("glBindVertexShaderEXT");
  glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC)SDL_GL_GetProcAddress("glGenVertexShadersEXT");
  glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)SDL_GL_GetProcAddress("glDeleteVertexShaderEXT");
  glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC)SDL_GL_GetProcAddress("glShaderOp1EXT");
  glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC)SDL_GL_GetProcAddress("glShaderOp2EXT");
  glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC)SDL_GL_GetProcAddress("glShaderOp3EXT");
  glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)SDL_GL_GetProcAddress("glSwizzleEXT");
  glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC)SDL_GL_GetProcAddress("glWriteMaskEXT");
  glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC)SDL_GL_GetProcAddress("glInsertComponentEXT");
  glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC)SDL_GL_GetProcAddress("glExtractComponentEXT");
  glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC)SDL_GL_GetProcAddress("glGenSymbolsEXT");
  glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC)SDL_GL_GetProcAddress("glSetInvariantEXT");
  glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC)SDL_GL_GetProcAddress("glSetLocalConstantEXT");
  glVariantbvEXT = (PFNGLVARIANTBVEXTPROC)SDL_GL_GetProcAddress("glVariantbvEXT");
  glVariantsvEXT = (PFNGLVARIANTSVEXTPROC)SDL_GL_GetProcAddress("glVariantsvEXT");
  glVariantivEXT = (PFNGLVARIANTIVEXTPROC)SDL_GL_GetProcAddress("glVariantivEXT");
  glVariantfvEXT = (PFNGLVARIANTFVEXTPROC)SDL_GL_GetProcAddress("glVariantfvEXT");
  glVariantdvEXT = (PFNGLVARIANTDVEXTPROC)SDL_GL_GetProcAddress("glVariantdvEXT");
  glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC)SDL_GL_GetProcAddress("glVariantubvEXT");
  glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC)SDL_GL_GetProcAddress("glVariantusvEXT");
  glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC)SDL_GL_GetProcAddress("glVariantuivEXT");
  glVariantPoGLinterEXT = (PFNGLVARIANTPOGLINTEREXTPROC)SDL_GL_GetProcAddress("glVariantPoGLinterEXT");
  glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)SDL_GL_GetProcAddress("glEnableVariantClientStateEXT");
  glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)SDL_GL_GetProcAddress("glDisableVariantClientStateEXT");
  glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)SDL_GL_GetProcAddress("glBindLightParameterEXT");
  glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)SDL_GL_GetProcAddress("glBindMaterialParameterEXT");
  glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)SDL_GL_GetProcAddress("glBindTexGenParameterEXT");
  glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)SDL_GL_GetProcAddress("glBindTextureUnitParameterEXT");
  glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC)SDL_GL_GetProcAddress("glBindParameterEXT");
  glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC)SDL_GL_GetProcAddress("glIsVariantEnabledEXT");
  glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)SDL_GL_GetProcAddress("glGetVariantBooleanvEXT");
  glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)SDL_GL_GetProcAddress("glGetVariantIntegervEXT");
  glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC)SDL_GL_GetProcAddress("glGetVariantFloatvEXT");
  glGetVariantPoGLintervEXT = (PFNGLGETVARIANTPOGLINTERVEXTPROC)SDL_GL_GetProcAddress("glGetVariantPoGLintervEXT");
  glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)SDL_GL_GetProcAddress("glGetInvariantBooleanvEXT");
  glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)SDL_GL_GetProcAddress("glGetInvariantIntegervEXT");
  glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)SDL_GL_GetProcAddress("glGetInvariantFloatvEXT");
  glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)SDL_GL_GetProcAddress("glGetLocalConstantBooleanvEXT");
  glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)SDL_GL_GetProcAddress("glGetLocalConstantIntegervEXT");
  glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)SDL_GL_GetProcAddress("glGetLocalConstantFloatvEXT");

  GL_EXT_vertex_shader_initialised = (glBeginVertexShaderEXT && glEndVertexShaderEXT && glBindVertexShaderEXT && glGenVertexShadersEXT && glDeleteVertexShaderEXT && glShaderOp1EXT && glShaderOp2EXT && glShaderOp3EXT && glSwizzleEXT && glWriteMaskEXT && glInsertComponentEXT && glExtractComponentEXT && glGenSymbolsEXT && glSetInvariantEXT && glSetLocalConstantEXT && glVariantbvEXT && glVariantsvEXT && glVariantivEXT && glVariantfvEXT && glVariantdvEXT && glVariantubvEXT && glVariantusvEXT && glVariantuivEXT && glVariantPoGLinterEXT && glEnableVariantClientStateEXT && glDisableVariantClientStateEXT && glBindLightParameterEXT && glBindMaterialParameterEXT && glBindTexGenParameterEXT && glBindTextureUnitParameterEXT && glBindParameterEXT && glIsVariantEnabledEXT && glGetVariantBooleanvEXT && glGetVariantIntegervEXT && glGetVariantFloatvEXT && glGetVariantPoGLintervEXT && glGetInvariantBooleanvEXT && glGetInvariantIntegervEXT && glGetInvariantFloatvEXT && glGetLocalConstantBooleanvEXT && glGetLocalConstantIntegervEXT && glGetLocalConstantFloatvEXT);

  return GL_EXT_vertex_shader_initialised;
}
