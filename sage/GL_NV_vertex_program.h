// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_NV_vertex_program_H
#define GL_NV_vertex_program_H 1

#include <GL/gl.h>
#include <sage/sage.h>

#ifndef GL_NV_vertex_program
#define GL_NV_vertex_program 1

// Function pointers
typedef void (*PFNGLBINDPROGRAMNVPROC)(GLenum target, GLuint id);
typedef void (*PFNGLDELETEPROGRAMSNVPROC)(GLsizei n, const GLuint *ids);
typedef void (*PFNGLEXECUTEPROGRAMNVPROC)(GLenum target, GLuint id, const GLfloat *params);
typedef void (*PFNGLGENPROGRAMSNVPROC)(GLsizei n, GLuint *ids);
typedef int (*PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei n, const GLuint *ids, GLboolean *residences);
typedef void (*PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei n, GLuint *ids);
typedef void (*PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum target, GLuint index, GLenum pname, GLdouble *params);
typedef void (*PFNGLGETPROGRAMIVNVPROC)(GLuint id, GLenum pname, GLint *params);
typedef void (*PFNGLGETPROGRAMSTRINGNVPROC)(GLuint id, GLenum pname, GLubyte *program);
typedef void (*PFNGLGETTRACKMATRIXIVNVPROC)(GLenum target, GLuint address, GLenum pname, GLint *params);
typedef void (*PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint index, GLenum pname, GLdouble *params);
typedef void (*PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint index, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (*PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint index, GLenum pname, void **pointer);
typedef int (*PFNGLISPROGRAMNVPROC)(GLuint id);
typedef void (*PFNGLLOADPROGRAMNVPROC)(GLenum target, GLuint id, GLsizei len, const GLubyte *program);
typedef void (*PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (*PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum target, GLuint index, const GLdouble *params);
typedef void (*PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum target, GLuint index, const GLfloat *params);
typedef void (*PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum target, GLuint index, GLuint num, const GLdouble *params);
typedef void (*PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum target, GLuint index, GLuint num, const GLfloat *params);
typedef void (*PFNGLTRACKMATRIXNVPROC)(GLenum target, GLuint address, GLsizei matrix, GLsizei transform);
typedef void (*PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (*PFNGLVERTEXATTRIB1SNVPROC)(GLuint index, GLshort x);
typedef void (*PFNGLVERTEXATTRIB1FNVPROC)(GLuint index, GLfloat x);
typedef void (*PFNGLVERTEXATTRIB1DNVPROC)(GLuint index, GLdouble x);
typedef void (*PFNGLVERTEXATTRIB2SNVPROC)(GLuint index, GLshort x, GLshort y);
typedef void (*PFNGLVERTEXATTRIB2FNVPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (*PFNGLVERTEXATTRIB2DNVPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (*PFNGLVERTEXATTRIB3SNVPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (*PFNGLVERTEXATTRIB3FNVPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (*PFNGLVERTEXATTRIB3DNVPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (*PFNGLVERTEXATTRIB4SNVPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (*PFNGLVERTEXATTRIB4FNVPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLVERTEXATTRIB4DNVPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (*PFNGLVERTEXATTRIB4UBNVPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (*PFNGLVERTEXATTRIB1SVNVPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB1FVNVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB1DVNVPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB2SVNVPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB2FVNVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB2DVNVPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB3SVNVPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB3FVNVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB3DVNVPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB4SVNVPROC)(GLuint index, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIB4FVNVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB4DVNVPROC)(GLuint index, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint index, const GLubyte *v);
typedef void (*PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint index, GLsizei n, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint index, GLsizei n, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint index, GLsizei n, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint index, GLsizei n, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint index, GLsizei n, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint index, GLsizei n, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint index, GLsizei n, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint index, GLsizei n, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint index, GLsizei n, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint index, GLsizei n, const GLshort *v);
typedef void (*PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint index, GLsizei n, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint index, GLsizei n, const GLdouble *v);
typedef void (*PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint index, GLsizei n, const GLubyte *v);

// Constants
#define GL_VERTEX_PROGRAM_NV                              0x8620 
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV                   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV                     0x8643
#define GL_VERTEX_STATE_PROGRAM_NV                        0x8621 
#define GL_ATTRIB_ARRAY_SIZE_NV                           0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV                         0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV                           0x8625
#define GL_CURRENT_ATTRIB_NV                              0x8626
#define GL_PROGRAM_PARAMETER_NV                           0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV                        0x8645
#define GL_PROGRAM_TARGET_NV                              0x8646
#define GL_PROGRAM_LENGTH_NV                              0x8627
#define GL_PROGRAM_RESIDENT_NV                            0x8647
#define GL_PROGRAM_STRING_NV                              0x8628
#define GL_TRACK_MATRIX_NV                                0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV                      0x8649
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV                0x862E
#define GL_MAX_TRACK_MATRICES_NV                          0x862F
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV                  0x8640
#define GL_CURRENT_MATRIX_NV                              0x8641
#define GL_VERTEX_PROGRAM_BINDING_NV                      0x864A
#define GL_PROGRAM_ERROR_POSITION_NV                      0x864B
#define GL_MODELVIEW_PROJECTION_NV                        0x8629
#define GL_MATRIX0_NV                                     0x8630
#define GL_MATRIX1_NV                                     0x8631
#define GL_MATRIX2_NV                                     0x8632
#define GL_MATRIX3_NV                                     0x8633
#define GL_MATRIX4_NV                                     0x8634
#define GL_MATRIX5_NV                                     0x8635
#define GL_MATRIX6_NV                                     0x8636
#define GL_MATRIX7_NV                                     0x8637
#define GL_IDENTITY_NV                                    0x862A
#define GL_INVERSE_NV                                     0x862B
#define GL_TRANSPOSE_NV                                   0x862C
#define GL_INVERSE_TRANSPOSE_NV                           0x862D 
#define GL_VERTEX_ATTRIB_ARRAY0_NV                        0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV                        0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV                        0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV                        0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV                        0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV                        0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV                        0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV                        0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV                        0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV                        0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV                       0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV                       0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV                       0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV                       0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV                       0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV                       0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV                       0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV                       0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV                       0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV                       0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV                       0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV                       0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV                       0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV                       0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV                       0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV                       0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV                      0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV                      0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV                      0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV                      0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV                      0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV                      0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV                       0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV                       0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV                       0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV                       0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV                       0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV                       0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV                       0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV                       0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV                       0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV                       0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV                      0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV                      0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV                      0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV                      0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV                      0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV                      0x867F

#endif

SAGEAPI PFNGLBINDPROGRAMNVPROC glBindProgramNV;
SAGEAPI PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV;
SAGEAPI PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV;
SAGEAPI PFNGLGENPROGRAMSNVPROC glGenProgramsNV;
SAGEAPI PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV;
SAGEAPI PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV;
SAGEAPI PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV;
SAGEAPI PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV;
SAGEAPI PFNGLGETPROGRAMIVNVPROC glGetProgramivNV;
SAGEAPI PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV;
SAGEAPI PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV;
SAGEAPI PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV;
SAGEAPI PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV;
SAGEAPI PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV;
SAGEAPI PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV;
SAGEAPI PFNGLISPROGRAMNVPROC glIsProgramNV;
SAGEAPI PFNGLLOADPROGRAMNVPROC glLoadProgramNV;
SAGEAPI PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV;
SAGEAPI PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV;
SAGEAPI PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV;
SAGEAPI PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV;
SAGEAPI PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV;
SAGEAPI PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV;
SAGEAPI PFNGLTRACKMATRIXNVPROC glTrackMatrixNV;
SAGEAPI PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV;
SAGEAPI PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV;
SAGEAPI PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV;
SAGEAPI PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV;
SAGEAPI PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV;
SAGEAPI PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV;
SAGEAPI PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV;
SAGEAPI PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV;
SAGEAPI PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV;
SAGEAPI PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV;
SAGEAPI PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV;
SAGEAPI PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV;
SAGEAPI PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV;
SAGEAPI PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV;
SAGEAPI PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV;
SAGEAPI PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV;
SAGEAPI PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV;
SAGEAPI PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV;
SAGEAPI PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV;
SAGEAPI PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV;
SAGEAPI PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV;
SAGEAPI PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV;
SAGEAPI PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV;
SAGEAPI PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV;
SAGEAPI PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV;
SAGEAPI PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV;
SAGEAPI PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV;
SAGEAPI PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV;
SAGEAPI PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV;
SAGEAPI PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV;
SAGEAPI PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV;
SAGEAPI PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV;
SAGEAPI PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV;
SAGEAPI PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV;
SAGEAPI PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV;
SAGEAPI PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV;
SAGEAPI PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV;
SAGEAPI PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV;
SAGEAPI PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV;
SAGEAPI PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV;

SAGEAPI int GL_NV_vertex_program_initialised;
SAGEAPI int initialise_GL_NV_vertex_program();

#endif
