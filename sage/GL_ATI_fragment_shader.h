// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ATI_fragment_shader_H
#define GL_ATI_fragment_shader_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ATI_fragment_shader
#define GL_ATI_fragment_shader 1

typedef GLuint (*PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint range);
typedef void (*PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint id);
typedef void (*PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint id);
typedef void (*PFNGLBEGINFRAGMENTSHADERATIPROC)(void);
typedef void (*PFNGLENDFRAGMENTSHADERATIPROC)(void);
typedef void (*PFNGLPASSTEXCOORDATIPROC)(GLuint dst, GLuint coord, GLenum swizzle);
typedef void (*PFNGLSAMPLEMAPATIPROC)(GLuint dst, GLuint interp, GLenum swizzle);
typedef void (*PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (*PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (*PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (*PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (*PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (*PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (*PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint dst, const GLfloat *value);

#define GL_FRAGMENT_SHADER_ATI                   0x8920
#define GL_REG_0_ATI                             0x8921
#define GL_REG_1_ATI                             0x8922
#define GL_REG_2_ATI                             0x8923
#define GL_REG_3_ATI                             0x8924
#define GL_REG_4_ATI                             0x8925
#define GL_REG_5_ATI                             0x8926
#define GL_CON_0_ATI                             0x8941
#define GL_CON_1_ATI                             0x8942
#define GL_CON_2_ATI                             0x8943
#define GL_CON_3_ATI                             0x8944
#define GL_CON_4_ATI                             0x8945
#define GL_CON_5_ATI                             0x8946
#define GL_CON_6_ATI                             0x8947
#define GL_CON_7_ATI                             0x8948
#define GL_MOV_ATI                               0x8961
#define GL_ADD_ATI                               0x8963
#define GL_MUL_ATI                               0x8964
#define GL_SUB_ATI                               0x8965
#define GL_DOT3_ATI                              0x8966
#define GL_DOT4_ATI                              0x8967
#define GL_MAD_ATI                               0x8968
#define GL_LERP_ATI                              0x8969
#define GL_CND_ATI                               0x896A
#define GL_CND0_ATI                              0x896B
#define GL_DOT2_ADD_ATI                          0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI            0x896D
#define GL_SWIZZLE_STR_ATI                       0x8976
#define GL_SWIZZLE_STQ_ATI                       0x8977
#define GL_SWIZZLE_STR_DR_ATI                    0x8978
#define GL_SWIZZLE_STQ_DQ_ATI                    0x8979
#define GL_RED_BIT_ATI                           0x00000001
#define GL_GREEN_BIT_ATI                         0x00000002
#define GL_BLUE_BIT_ATI                          0x00000004
#define GL_2X_BIT_ATI                            0x00000001
#define GL_4X_BIT_ATI                            0x00000002
#define GL_8X_BIT_ATI                            0x00000004
#define GL_HALF_BIT_ATI                          0x00000008
#define GL_QUARTER_BIT_ATI                       0x00000010
#define GL_EIGHTH_BIT_ATI                        0x00000020
#define GL_SATURATE_BIT_ATI                      0x00000040
#define GL_2X_BIT_ATI                            0x00000001
#define GL_COMP_BIT_ATI                          0x00000002
#define GL_NEGATE_BIT_ATI                        0x00000004
#define GL_BIAS_BIT_ATI                          0x00000008

#endif

SAGEAPI PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;
SAGEAPI PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;
SAGEAPI PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;
SAGEAPI PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;
SAGEAPI PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;
SAGEAPI PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI;
SAGEAPI PFNGLSAMPLEMAPATIPROC glSampleMapATI;
SAGEAPI PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;
SAGEAPI PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;
SAGEAPI PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;
SAGEAPI PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;
SAGEAPI PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;
SAGEAPI PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;
SAGEAPI PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;

SAGEAPI int GL_ATI_fragment_shader_initialised;
SAGEAPI int initialise_GL_ATI_fragment_shader();

#endif
