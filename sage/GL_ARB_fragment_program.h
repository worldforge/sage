// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_fragment_program_H
#define GL_ARB_fragment_program_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_fragment_program
#define GL_ARB_fragment_program 1

typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum target, GLenum format, GLsizei len, const void *string);
typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum target, GLuint program);
typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei n, const GLuint *programs);
typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei n, GLuint *programs);
typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble *params);
typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat *params);
typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble *params);
typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat *params);
typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble *params);
typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat *params);
typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble *params);
typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat *params);
typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum target, GLenum pname, void *string);
typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint program);

#define GL_FRAGMENT_PROGRAM_ARB                            0x8804
#define GL_PROGRAM_FORMAT_ASCII_ARB                        0x8875
#define GL_PROGRAM_LENGTH_ARB                              0x8627
#define GL_PROGRAM_FORMAT_ARB                              0x8876
#define GL_PROGRAM_BINDING_ARB                             0x8677
#define GL_PROGRAM_INSTRUCTIONS_ARB                        0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB                    0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB                 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB             0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB                         0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB                     0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB                  0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB              0x88A7
#define GL_PROGRAM_PARAMETERS_ARB                          0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB                      0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB                   0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB               0x88AB
#define GL_PROGRAM_ATTRIBS_ARB                             0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB                         0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB                      0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB                  0x88AF
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB                0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB                  0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB                 0x88B6
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB                    0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB                    0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB                    0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB             0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB             0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB             0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB                0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB                0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB                0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB         0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB         0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB         0x8810
#define GL_PROGRAM_STRING_ARB                              0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB                      0x864B
#define GL_CURRENT_MATRIX_ARB                              0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB                    0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB                  0x8640
#define GL_MAX_PROGRAM_MATRICES_ARB                        0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB              0x862E
#define GL_MAX_TEXTURE_COORDS_ARB                          0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB                     0x8872
#define GL_PROGRAM_ERROR_STRING_ARB                        0x8874
#define GL_MATRIX0_ARB                                     0x88C0
#define GL_MATRIX1_ARB                                     0x88C1
#define GL_MATRIX2_ARB                                     0x88C2
#define GL_MATRIX3_ARB                                     0x88C3
#define GL_MATRIX4_ARB                                     0x88C4
#define GL_MATRIX5_ARB                                     0x88C5
#define GL_MATRIX6_ARB                                     0x88C6
#define GL_MATRIX7_ARB                                     0x88C7
#define GL_MATRIX8_ARB                                     0x88C8
#define GL_MATRIX9_ARB                                     0x88C9
#define GL_MATRIX10_ARB                                    0x88CA
#define GL_MATRIX11_ARB                                    0x88CB
#define GL_MATRIX12_ARB                                    0x88CC
#define GL_MATRIX13_ARB                                    0x88CD
#define GL_MATRIX14_ARB                                    0x88CE
#define GL_MATRIX15_ARB                                    0x88CF
#define GL_MATRIX16_ARB                                    0x88D0
#define GL_MATRIX17_ARB                                    0x88D1
#define GL_MATRIX18_ARB                                    0x88D2
#define GL_MATRIX19_ARB                                    0x88D3
#define GL_MATRIX20_ARB                                    0x88D4
#define GL_MATRIX21_ARB                                    0x88D5
#define GL_MATRIX22_ARB                                    0x88D6
#define GL_MATRIX23_ARB                                    0x88D7
#define GL_MATRIX24_ARB                                    0x88D8
#define GL_MATRIX25_ARB                                    0x88D9
#define GL_MATRIX26_ARB                                    0x88DA
#define GL_MATRIX27_ARB                                    0x88DB
#define GL_MATRIX28_ARB                                    0x88DC
#define GL_MATRIX29_ARB                                    0x88DD
#define GL_MATRIX30_ARB                                    0x88DE
#define GL_MATRIX31_ARB                                    0x88DF

#endif

SAGEAPI PFNGLPROGRAMSTRINGARBPROC glProgramStringARB;
SAGEAPI PFNGLBINDPROGRAMARBPROC glBindProgramARB;
SAGEAPI PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB;
SAGEAPI PFNGLGENPROGRAMSARBPROC glGenProgramsARB;
SAGEAPI PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;
SAGEAPI PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;
SAGEAPI PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;
SAGEAPI PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;
SAGEAPI PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;
SAGEAPI PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;
SAGEAPI PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;
SAGEAPI PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;
SAGEAPI PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;
SAGEAPI PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;
SAGEAPI PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;
SAGEAPI PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;
SAGEAPI PFNGLGETPROGRAMIVARBPROC glGetProgramivARB;
SAGEAPI PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB;
SAGEAPI PFNGLISPROGRAMARBPROC glIsProgramARB;

SAGEAPI int GL_ARB_fragment_program_initialised;
SAGEAPI int initialise_GL_ARB_fragment_program();

#endif
