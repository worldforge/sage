// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_ARB_vertex_program
#define GL_ARB_vertex_program 1

#include <GL/gl.h>

static const char * const str_GL_ARB_vertex_program = "GL_ARB_vertex_program";
static int GL_ARB_vertex_program_initialised = 0;

typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint index, GLshort x);
static PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB = 0;

typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint index, GLfloat x);
static PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB = 0;

typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint index, GLdouble x);
static PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB = 0;

typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint index, GLshort x, GLshort y);
static PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB = 0;

typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint index, GLfloat x, GLfloat y);
static PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB = 0;

typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint index, GLdouble x, GLdouble y);
static PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB = 0;

typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
static PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB = 0;

typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
static PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB = 0;

typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
static PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB = 0;

typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
static PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB = 0;

typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
static PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB = 0;

typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
static PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
static PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB = 0;

typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint index, const GLshort *v);
static PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB = 0;

typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint index, const GLfloat *v);
static PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB = 0;

typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint index, const GLdouble *v);
static PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB = 0;

typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint index, const GLshort *v);
static PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB = 0;

typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint index, const GLfloat *v);
static PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB = 0;

typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint index, const GLdouble *v);
static PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB = 0;

typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint index, const GLshort *v);
static PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB = 0;

typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint index, const GLfloat *v);
static PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB = 0;

typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint index, const GLdouble *v);
static PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint index, const GLbyte *v);
static PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint index, const GLshort *v);
static PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB = 0;

typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint index, const GLint *v);
static PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB = 0;

typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint index, const GLubyte *v);
static PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint index, const GLushort *v);
static PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint index, const GLuint *v);
static PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB = 0;

typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint index, const GLfloat *v);
static PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint index, const GLdouble *v);
static PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint index, const GLbyte *v);
static PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint index, const GLshort *v);
static PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint index, const GLint *v);
static PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint index, const GLubyte *v);
static PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint index, const GLushort *v);
static PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB = 0;

typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint index, const GLuint *v);
static PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB = 0;

typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
static PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB = 0;

typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
static PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB = 0;

typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
static PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB = 0;

typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum target, GLenum format, GLsizei len, const void *string);
static PFNGLPROGRAMSTRINGARBPROC glProgramStringARB = 0;

typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum target, GLuint program);
static PFNGLBINDPROGRAMARBPROC glBindProgramARB = 0;

typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei n, const GLuint *programs);
static PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB = 0;

typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei n, GLuint *programs);
static PFNGLGENPROGRAMSARBPROC glGenProgramsARB = 0;

typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
static PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB = 0;

typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble *params);
static PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB = 0;

typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
static PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB = 0;

typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat *params);
static PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB = 0;

typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
static PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB = 0;

typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble *params);
static PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB = 0;

typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
static PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB = 0;

typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat *params);
static PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB = 0;

typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble *params);
static PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB = 0;

typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat *params);
static PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB = 0;

typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble *params);
static PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB = 0;

typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat *params);
static PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB = 0;

typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum target, GLenum pname, GLint *params);
static PFNGLGETPROGRAMIVARBPROC glGetProgramivARB = 0;

typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum target, GLenum pname, void *string);
static PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB = 0;

typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint index, GLenum pname, GLdouble *params);
static PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB = 0;

typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint index, GLenum pname, GLfloat *params);
static PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB = 0;

typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint index, GLenum pname, GLint *params);
static PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB = 0;

typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint index, GLenum pname, void **pointer);
static PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB = 0;

typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint program);
static PFNGLISPROGRAMARBPROC glIsProgramARB = 0;



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


static int initialise_GL_ARB_vertex_program();

#else
static int GL_ARB_vertex_program_initialised = 1;
#endif
