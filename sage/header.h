// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef SAGE_HEADER_H
#define SAGE_HEADER_H 1

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN extern
#endif

#if defined(_WIN32) && !defined(__MINGW32__)
  #ifdef BUILD_SAGE_DLL
    #define SAGEAPI EXTERN __declspec(dllexport)
  #else
    #define SAGEAPI EXTERN __declspec(dllimport)
  #endif
#else
  #define SAGEAPI EXTERN
#endif

//#define __glext_h_ 1
//#include <GL/gl.h>
//#undef __glext_h_

#endif