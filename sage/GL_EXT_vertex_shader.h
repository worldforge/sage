// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_EXT_vertex_shader_H
#define GL_EXT_vertex_shader_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_EXT_vertex_shader
#define GL_EXT_vertex_shader 1


typedef void (*PFNGLBEGINVERTEXSHADEREXTPROC)(void);
typedef void (*PFNGLENDVERTEXSHADEREXTPROC)(void);
typedef void (*PFNGLBINDVERTEXSHADEREXTPROC)(GLuint id);
typedef GLuint (*PFNGLGENVERTEXSHADERSEXTPROC)(GLuint range);
typedef void (*PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint id);
typedef void (*PFNGLSHADEROP1EXTPROC)(GLenum op, GLuint res, GLuint arg1);
typedef void (*PFNGLSHADEROP2EXTPROC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
typedef void (*PFNGLSHADEROP3EXTPROC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
typedef void (*PFNGLSWIZZLEEXTPROC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void (*PFNGLWRITEMASKEXTPROC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void (*PFNGLINSERTCOMPONENTEXTPROC)(GLuint res, GLuint src, GLuint num);
typedef void (*PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint res, GLuint src, GLuint num);
typedef GLuint (*PFNGLGENSYMBOLSEXTPROC)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
typedef void (*PFNGLSETINVARIANTEXTPROC)(GLuint id, GLenum type, void *addr);
typedef void (*PFNGLSETLOCALCONSTANTEXTPROC)(GLuint id, GLenum type, void *addr);
typedef void (*PFNGLVARIANTBVEXTPROC)(GLuint id, GLbyte *addr);
typedef void (*PFNGLVARIANTSVEXTPROC)(GLuint id, GLshort *addr);
typedef void (*PFNGLVARIANTIVEXTPROC)(GLuint id, GLint *addr);
typedef void (*PFNGLVARIANTFVEXTPROC)(GLuint id, GLfloat *addr);
typedef void (*PFNGLVARIANTDVEXTPROC)(GLuint id, GLdouble *addr);
typedef void (*PFNGLVARIANTUBVEXTPROC)(GLuint id, GLubyte *addr);
typedef void (*PFNGLVARIANTUSVEXTPROC)(GLuint id, GLushort *addr);
typedef void (*PFNGLVARIANTUIVEXTPROC)(GLuint id, GLuint *addr);
typedef void (*PFNGLVARIANTPOGLINTEREXTPROC)(GLuint id, GLenum type, GLuint stride, void *addr);
typedef void (*PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint id);
typedef void (*PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint id);
typedef GLuint (*PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum light, GLenum value);
typedef GLuint (*PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum face, GLenum value);
typedef GLuint (*PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum unit, GLenum coord, GLenum value);
typedef GLuint (*PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum unit, GLenum value);
typedef GLuint (*PFNGLBINDPARAMETEREXTPROC)(GLenum value);
typedef GLboolean (*PFNGLISVARIANTENABLEDEXTPROC)(GLuint id, GLenum cap);
typedef void (*PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (*PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (*PFNGLGETVARIANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);
typedef void (*PFNGLGETVARIANTPOGLINTERVEXTPROC)(GLuint id, GLenum value, void **data);
typedef void (*PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (*PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (*PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);
typedef void (*PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (*PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (*PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);

#define GL_VERTEX_SHADER_EXT                   0x8780
#define GL_VARIANT_VALUE_EXT                   0x87E4
#define GL_VARIANT_DATATYPE_EXT                0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT            0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT              0x87E7
#define GL_VARIANT_ARRAY_EXT                   0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT           0x87E9
#define GL_INVARIANT_VALUE_EXT                 0x87EA
#define GL_INVARIANT_DATATYPE_EXT              0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT            0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT         0x87ED
#define GL_OP_INDEX_EXT                        0x8782
#define GL_OP_NEGATE_EXT                       0x8783
#define GL_OP_DOT3_EXT                         0x8784
#define GL_OP_DOT4_EXT                         0x8785
#define GL_OP_MUL_EXT                          0x8786
#define GL_OP_ADD_EXT                          0x8787
#define GL_OP_MADD_EXT                         0x8788
#define GL_OP_FRAC_EXT                         0x8789
#define GL_OP_MAX_EXT                          0x878A
#define GL_OP_MIN_EXT                          0x878B
#define GL_OP_SET_GE_EXT                       0x878C
#define GL_OP_SET_LT_EXT                       0x878D
#define GL_OP_CLAMP_EXT                        0x878E
#define GL_OP_FLOOR_EXT                        0x878F
#define GL_OP_ROUND_EXT                        0x8790
#define GL_OP_EXP_BASE_2_EXT                   0x8791
#define GL_OP_LOG_BASE_2_EXT                   0x8792
#define GL_OP_POWER_EXT                        0x8793
#define GL_OP_RECIP_EXT                        0x8794
#define GL_OP_RECIP_SQRT_EXT                   0x8795
#define GL_OP_SUB_EXT                          0x8796
#define GL_OP_CROSS_PRODUCT_EXT                0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT              0x8798
#define GL_OP_MOV_EXT                          0x8799
#define GL_OUTPUT_VERTEX_EXT                   0x879A
#define GL_OUTPUT_COLOR0_EXT                   0x879B
#define GL_OUTPUT_COLOR1_EXT                   0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT           0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT           0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT           0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT           0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT           0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT           0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT           0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT           0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT           0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT           0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT          0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT          0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT          0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT          0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT          0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT          0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT          0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT          0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT          0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT          0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT          0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT          0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT          0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT          0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT          0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT          0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT          0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT          0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT          0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT          0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT          0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT          0x87BC
#define GL_OUTPUT_FOG_EXT                      0x87BD
#define GL_SCALAR_EXT                          0x87BE
#define GL_VECTOR_EXT                          0x87BF
#define GL_MATRIX_EXT                          0x87C0
#define GL_VARIANT_EXT                         0x87C1
#define GL_INVARIANT_EXT                       0x87C2
#define GL_LOCAL_CONSTANT_EXT                  0x87C3
#define GL_LOCAL_EXT                           0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT              0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT                  0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT                0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT           0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT                    0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT    0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT        0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INARIANTS_EXT       0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT          0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT                  0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT                      0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT                    0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT               0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT                        0x87D3
#define GL_VERTEX_SHADER_BINDING_EXT                       0x8781
#define GL_VERTEX_SHADER_OPTIMIZED_EXT                     0x87D4
#define GL_X_EXT                               0x87D5
#define GL_Y_EXT                               0x87D6
#define GL_Z_EXT                               0x87D7
#define GL_W_EXT                               0x87D8
#define GL_NEGATIVE_X_EXT                      0x87D9
#define GL_NEGATIVE_Y_EXT                      0x87DA
#define GL_NEGATIVE_Z_EXT                      0x87DB
#define GL_NEGATIVE_W_EXT                      0x87DC
#define GL_ZERO_EXT                            0x87dd
#define GL_ONE_EXT                             0x87de
#define GL_NEGATIVE_ONE_EXT                    0x87DF
#define GL_NORMALIZED_RANGE_EXT                    0x87E0
#define GL_FULL_RANGE_EXT                          0x87E1
#define GL_CURRENT_VERTEX_EXT                  0x87E2
#define GL_MVP_MATRIX_EXT                      0x87E3

#endif

SAGEAPI PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;
SAGEAPI PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;
SAGEAPI PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;
SAGEAPI PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;
SAGEAPI PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;
SAGEAPI PFNGLSHADEROP1EXTPROC glShaderOp1EXT;
SAGEAPI PFNGLSHADEROP2EXTPROC glShaderOp2EXT;
SAGEAPI PFNGLSHADEROP3EXTPROC glShaderOp3EXT;
SAGEAPI PFNGLSWIZZLEEXTPROC glSwizzleEXT;
SAGEAPI PFNGLWRITEMASKEXTPROC glWriteMaskEXT;
SAGEAPI PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT;
SAGEAPI PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;
SAGEAPI PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT;
SAGEAPI PFNGLSETINVARIANTEXTPROC glSetInvariantEXT;
SAGEAPI PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;
SAGEAPI PFNGLVARIANTBVEXTPROC glVariantbvEXT;
SAGEAPI PFNGLVARIANTSVEXTPROC glVariantsvEXT;
SAGEAPI PFNGLVARIANTIVEXTPROC glVariantivEXT;
SAGEAPI PFNGLVARIANTFVEXTPROC glVariantfvEXT;
SAGEAPI PFNGLVARIANTDVEXTPROC glVariantdvEXT;
SAGEAPI PFNGLVARIANTUBVEXTPROC glVariantubvEXT;
SAGEAPI PFNGLVARIANTUSVEXTPROC glVariantusvEXT;
SAGEAPI PFNGLVARIANTUIVEXTPROC glVariantuivEXT;
SAGEAPI PFNGLVARIANTPOGLINTEREXTPROC glVariantPoGLinterEXT;
SAGEAPI PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;
SAGEAPI PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;
SAGEAPI PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;
SAGEAPI PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;
SAGEAPI PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;
SAGEAPI PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;
SAGEAPI PFNGLBINDPARAMETEREXTPROC glBindParameterEXT;
SAGEAPI PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;
SAGEAPI PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;
SAGEAPI PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;
SAGEAPI PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;
SAGEAPI PFNGLGETVARIANTPOGLINTERVEXTPROC glGetVariantPoGLintervEXT;
SAGEAPI PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;
SAGEAPI PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;
SAGEAPI PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;
SAGEAPI PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;
SAGEAPI PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;
SAGEAPI PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;

SAGEAPI int GL_EXT_vertex_shader_initialised;
SAGEAPI int initialise_GL_EXT_vertex_shader();

#endif
