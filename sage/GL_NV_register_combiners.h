// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef GL_NV_register_combiners
#define GL_NV_register_combiners 1

#include <GL/gl.h>

static const char * const str_GL_NV_register_combiners = "GL_NV_register_combiners";
static int GL_NV_register_combiners_initialised = 0;

// Function pointers
typedef void (*PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum pname, const GLfloat *params);
static PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV = 0;

typedef void (*PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum pname, const GLint *params);
static PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV =0;

typedef void (*PFNGLCOMBINERPARAMETERFNVPROC)(GLenum pname, GLfloat param);
static PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV = 0;

typedef void (*PFNGLCOMBINERPARAMETERINVPROC)(GLenum pname, GLint param);
static PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV = 0;

typedef void (*PFNGLCOMBINERINPUTNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
static PFNGLCOMBINERINPUTNVPROC glCombinerInputNV = 0;

typedef void (*PFNGLCOMBINEROUTPUTNVPROC)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
static PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV = 0;

typedef void (*PFNGLFINALCOMBINERINPUTNVPROC)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
static PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV = 0;

typedef void (*PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
static PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV = 0;

typedef void (*PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname,	GLint *params);
static PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV = 0;

typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum stage, GLenum portion, GLenum pname,GLfloat *params);
static PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV = 0;

typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum stage,GLenum portion, GLenum pname,GLint *params);
static PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV = 0;

typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum variable,GLenum pname,GLfloat *params);
static PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV = 0;

typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum variable,GLenum pname,GLint *params);
static PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV = 0;

// Constants

#define GL_REGISTER_COMBINERS_NV              0x8522
#define GL_COMBINER0_NV                       0x8550
#define GL_COMBINER1_NV                       0x8551
#define GL_COMBINER2_NV                       0x8552
#define GL_COMBINER3_NV                       0x8553
#define GL_COMBINER4_NV                       0x8554
#define GL_COMBINER5_NV                       0x8555
#define GL_COMBINER6_NV                       0x8556
#define GL_COMBINER7_NV                       0x8557
#define GL_VARIABLE_A_NV                      0x8523
#define GL_VARIABLE_B_NV                      0x8524
#define GL_VARIABLE_C_NV                      0x8525
#define GL_VARIABLE_D_NV                      0x8526
#define GL_VARIABLE_E_NV                      0x8527
#define GL_VARIABLE_F_NV                      0x8528
#define GL_VARIABLE_G_NV                      0x8529
#define GL_CONSTANT_COLOR0_NV                 0x852A
#define GL_CONSTANT_COLOR1_NV                 0x852B	        
#define GL_PRIMARY_COLOR_NV                   0x852C
#define GL_SECONDARY_COLOR_NV                 0x852D
#define GL_SPARE0_NV                          0x852E
#define GL_SPARE1_NV                          0x852F
#define GL_CONSTANT_COLOR0_NV                 0x852A
#define GL_CONSTANT_COLOR1_NV                 0x852B
#define GL_PRIMARY_COLOR_NV                   0x852C
#define GL_SECONDARY_COLOR_NV                 0x852D
#define GL_SPARE0_NV                          0x852E
#define GL_SPARE1_NV                          0x852F
#define GL_UNSIGNED_INVERT_NV                 0x8537
#define GL_EXPAND_NORMAL_NV                   0x8538
#define GL_EXPAND_NEGATE_NV                   0x8539
#define GL_HALF_BIAS_NORMAL_NV                0x853A
#define GL_HALF_BIAS_NEGATE_NV                0x853B
#define GL_SIGNED_IDENTITY_NV                 0x853C
#define GL_SIGNED_NEGATE_NV                   0x853D
#define GL_E_TIMES_F_NV                       0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV     0x8532
#define GL_COMBINER_MAPPING_NV                0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV        0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV         0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV         0x8546
#define GL_COMBINER_MUX_SUM_NV                0x8547
#define GL_COMBINER_SCALE_NV                  0x8548
#define GL_COMBINER_BIAS_NV                   0x8549
#define GL_COMBINER_AB_OUTPUT_NV              0x854A
#define GL_COMBINER_CD_OUTPUT_NV              0x854B
#define GL_COMBINER_SUM_OUTPUT_NV             0x854C
#define GL_NUM_GENERAL_COMBINERS_NV           0x854E
#define GL_COLOR_SUM_CLAMP_NV                 0x854F
#define GL_MAX_GENERAL_COMBINERS_NV           0x854D

static int initialise_GL_NV_register_combiners();

#else
static int GL_NV_register_combiners_initialised = 1;
#endif /* GL_NV_register_combiners */
