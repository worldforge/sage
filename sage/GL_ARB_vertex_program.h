// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_vertex_program_H
#define GL_ARB_vertex_program_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_ARB_vertex_program
#define GL_ARB_vertex_program 1

typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint index, GLshort x);
typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint index, GLfloat x);
typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint index, GLdouble x);
typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint index, GLshort x, GLshort y);
typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint index, const GLbyte *v);
typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint index, const GLint *v);
typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint index, const GLubyte *v);
typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint index, const GLushort *v);
typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint index, const GLuint *v);
typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint index, const GLbyte *v);
typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint index, const GLint *v);
typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint index, const GLubyte *v);
typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint index, const GLushort *v);
typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint index, const GLuint *v);
typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
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
typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint index, GLenum pname, GLdouble *params);
typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint index, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint index, GLenum pname, void **pointer);
typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint program);

#define GL_VERTEX_PROGRAM_ARB                              0x8620
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB                   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB                     0x8643
#define GL_COLOR_SUM_ARB                                   0x8458
#define GL_PROGRAM_FORMAT_ASCII_ARB                        0x8875
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB                 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB                    0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB                  0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB                    0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB              0x886A
#define GL_CURRENT_VERTEX_ATTRIB_ARB                       0x8626
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB                 0x8645
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
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB                   0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB               0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB            0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB        0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB                0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB                  0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB                 0x88B6
#define GL_PROGRAM_STRING_ARB                              0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB                      0x864B
#define GL_CURRENT_MATRIX_ARB                              0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB                    0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB                  0x8640
#define GL_MAX_VERTEX_ATTRIBS_ARB                          0x8869
#define GL_MAX_PROGRAM_MATRICES_ARB                        0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB              0x862E
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

SAGEAPI PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB;
SAGEAPI PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB;
SAGEAPI PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB;
SAGEAPI PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB;
SAGEAPI PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB;
SAGEAPI PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB;
SAGEAPI PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB;
SAGEAPI PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB;
SAGEAPI PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB;
SAGEAPI PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB;
SAGEAPI PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB;
SAGEAPI PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB;
SAGEAPI PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB;
SAGEAPI PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB;
SAGEAPI PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB;
SAGEAPI PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB;
SAGEAPI PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB;
SAGEAPI PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB;
SAGEAPI PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB;
SAGEAPI PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB;
SAGEAPI PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB;
SAGEAPI PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB;
SAGEAPI PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB;
SAGEAPI PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB;
SAGEAPI PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB;
SAGEAPI PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB;
SAGEAPI PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB;
SAGEAPI PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB;
SAGEAPI PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB;
SAGEAPI PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB;
SAGEAPI PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB;
SAGEAPI PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB;
SAGEAPI PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB;
SAGEAPI PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB;
SAGEAPI PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB;
SAGEAPI PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB;
SAGEAPI PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;
SAGEAPI PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;
SAGEAPI PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;
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
SAGEAPI PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB;
SAGEAPI PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB;
SAGEAPI PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB;
SAGEAPI PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB;
SAGEAPI PFNGLISPROGRAMARBPROC glIsProgramARB;

SAGEAPI int GL_ARB_vertex_program_initialised;
SAGEAPI int initialise_GL_ARB_vertex_program();

#endif
