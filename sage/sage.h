// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef SAGE_H
#define SAGE_H 1

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN extern
#endif

#ifdef __WIN32__
  #ifdef BUILD_SAGE_DLL
    #define SAGEAPI EXTERN __declspec(dllexport)
  #else
    #define SAGEAPI EXTERN __declspec(dllimport)
  #endif
#else
  #define SAGEAPI EXTERN
#endif

#endif
