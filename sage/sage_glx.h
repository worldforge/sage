// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003-2005 Simon Goodall

#ifndef SAGE_GLX_H
#define SAGE_GLX_H 1

#define GLX_VERSION_1_3 0
#define GLX_VERSION_1_4 1
#define GLX_ARB_GET_PROC_ADDRESS 2
#define GLX_ARB_MULTISAMPLE 3
#define GLX_SGIS_MULTISAMPLE 4
#define GLX_EXT_VISUAL_INFO 5
#define GLX_SGI_SWAP_CONTROL 6
#define GLX_SGI_VIDEO_SYNC 7
#define GLX_SGI_MAKE_CURRENT_READ 8
#define GLX_SGIX_VIDEO_SOURCE 9
#define GLX_EXT_VISUAL_RATING 10
#define GLX_EXT_IMPORT_CONTEXT 11
#define GLX_SGIX_FBCONFIG 12
#define GLX_SGIX_PBUFFER 13
#define GLX_SGI_CUSHION 14
#define GLX_SGIX_VIDEO_RESIZE 15
#define GLX_SGIX_DMBUFFER 16
#define GLX_SGIX_SWAP_GROUP 17
#define GLX_SGIX_SWAP_BARRIER 18
#define GLX_SUN_GET_TRANSPARENT_INDEX 19
#define GLX_MESA_COPY_SUB_BUFFER 20
#define GLX_MESA_PIXMAP_COLORMAP 21
#define GLX_MESA_RELEASE_BUFFERS 22
#define GLX_MESA_SET_3DFX_MODE 23
#define GLX_SGIX_VISUAL_SELECT_GROUP 24
#define GLX_OML_SWAP_METHOD 25
#define GLX_OML_SYNC_CONTROL 26
#define SAGE_GLX_LAST_EXTENSION 27

#include "sage/header.h"
#ifdef __glxext_h_
#error sage_glx.h needs to be included before glx.h
#endif
#define __glxext_h_ 1
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <GL/gl.h>
#include <GL/glx.h>

#undef __glxext_h_
#include <sage/glxext_sage.h>

SAGEAPI int sage_glx_ext[SAGE_GLX_LAST_EXTENSION];

#define GLX_VERSION_1_3 1
#ifdef SAGE_GLX_VERSION_1_3
SAGEAPI PFNGLXGETFBCONFIGATTRIBPROC SAGE_glXGetFBConfigAttrib;
#ifndef glXGetFBConfigAttrib
#define glXGetFBConfigAttrib SAGE_glXGetFBConfigAttrib
#endif
SAGEAPI PFNGLXCREATEWINDOWPROC SAGE_glXCreateWindow;
#ifndef glXCreateWindow
#define glXCreateWindow SAGE_glXCreateWindow
#endif
SAGEAPI PFNGLXDESTROYWINDOWPROC SAGE_glXDestroyWindow;
#ifndef glXDestroyWindow
#define glXDestroyWindow SAGE_glXDestroyWindow
#endif
SAGEAPI PFNGLXCREATEPIXMAPPROC SAGE_glXCreatePixmap;
#ifndef glXCreatePixmap
#define glXCreatePixmap SAGE_glXCreatePixmap
#endif
SAGEAPI PFNGLXDESTROYPIXMAPPROC SAGE_glXDestroyPixmap;
#ifndef glXDestroyPixmap
#define glXDestroyPixmap SAGE_glXDestroyPixmap
#endif
SAGEAPI PFNGLXCREATEPBUFFERPROC SAGE_glXCreatePbuffer;
#ifndef glXCreatePbuffer
#define glXCreatePbuffer SAGE_glXCreatePbuffer
#endif
SAGEAPI PFNGLXDESTROYPBUFFERPROC SAGE_glXDestroyPbuffer;
#ifndef glXDestroyPbuffer
#define glXDestroyPbuffer SAGE_glXDestroyPbuffer
#endif
SAGEAPI PFNGLXQUERYDRAWABLEPROC SAGE_glXQueryDrawable;
#ifndef glXQueryDrawable
#define glXQueryDrawable SAGE_glXQueryDrawable
#endif
SAGEAPI PFNGLXCREATENEWCONTEXTPROC SAGE_glXCreateNewContext;
#ifndef glXCreateNewContext
#define glXCreateNewContext SAGE_glXCreateNewContext
#endif
SAGEAPI PFNGLXMAKECONTEXTCURRENTPROC SAGE_glXMakeContextCurrent;
#ifndef glXMakeContextCurrent
#define glXMakeContextCurrent SAGE_glXMakeContextCurrent
#endif
SAGEAPI PFNGLXGETCURRENTREADDRAWABLEPROC SAGE_glXGetCurrentReadDrawable;
#ifndef glXGetCurrentReadDrawable
#define glXGetCurrentReadDrawable SAGE_glXGetCurrentReadDrawable
#endif
SAGEAPI PFNGLXQUERYCONTEXTPROC SAGE_glXQueryContext;
#ifndef glXQueryContext
#define glXQueryContext SAGE_glXQueryContext
#endif
SAGEAPI PFNGLXSELECTEVENTPROC SAGE_glXSelectEvent;
#ifndef glXSelectEvent
#define glXSelectEvent SAGE_glXSelectEvent
#endif
SAGEAPI PFNGLXGETSELECTEDEVENTPROC SAGE_glXGetSelectedEvent;
#ifndef glXGetSelectedEvent
#define glXGetSelectedEvent SAGE_glXGetSelectedEvent
#endif
#endif
#define GLX_VERSION_1_4 1
#ifdef SAGE_GLX_VERSION_1_4
#endif
#define GLX_ARB_get_proc_address 1
#ifdef SAGE_GLX_ARB_get_proc_address
#endif
#define GLX_ARB_multisample 1
#ifdef SAGE_GLX_ARB_multisample
#endif
#define GLX_SGIS_multisample 1
#ifdef SAGE_GLX_SGIS_multisample
#endif
#define GLX_EXT_visual_info 1
#ifdef SAGE_GLX_EXT_visual_info
#endif
#define GLX_SGI_swap_control 1
#ifdef SAGE_GLX_SGI_swap_control
SAGEAPI PFNGLXSWAPINTERVALSGIPROC SAGE_glXSwapIntervalSGI;
#ifndef glXSwapIntervalSGI
#define glXSwapIntervalSGI SAGE_glXSwapIntervalSGI
#endif
#endif
#define GLX_SGI_video_sync 1
#ifdef SAGE_GLX_SGI_video_sync
SAGEAPI PFNGLXGETVIDEOSYNCSGIPROC SAGE_glXGetVideoSyncSGI;
#ifndef glXGetVideoSyncSGI
#define glXGetVideoSyncSGI SAGE_glXGetVideoSyncSGI
#endif
SAGEAPI PFNGLXWAITVIDEOSYNCSGIPROC SAGE_glXWaitVideoSyncSGI;
#ifndef glXWaitVideoSyncSGI
#define glXWaitVideoSyncSGI SAGE_glXWaitVideoSyncSGI
#endif
#endif
#define GLX_SGI_make_current_read 1
#ifdef SAGE_GLX_SGI_make_current_read
SAGEAPI PFNGLXMAKECURRENTREADSGIPROC SAGE_glXMakeCurrentReadSGI;
#ifndef glXMakeCurrentReadSGI
#define glXMakeCurrentReadSGI SAGE_glXMakeCurrentReadSGI
#endif
SAGEAPI PFNGLXGETCURRENTREADDRAWABLESGIPROC SAGE_glXGetCurrentReadDrawableSGI;
#ifndef glXGetCurrentReadDrawableSGI
#define glXGetCurrentReadDrawableSGI SAGE_glXGetCurrentReadDrawableSGI
#endif
#endif
#define GLX_SGIX_video_source 1
#ifdef SAGE_GLX_SGIX_video_source
SAGEAPI PFNGLXCREATEGLXVIDEOSOURCESGIXPROC SAGE_glXCreateGLXVideoSourceSGIX;
#ifndef glXCreateGLXVideoSourceSGIX
#define glXCreateGLXVideoSourceSGIX SAGE_glXCreateGLXVideoSourceSGIX
#endif
SAGEAPI PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC SAGE_glXDestroyGLXVideoSourceSGIX;
#ifndef glXDestroyGLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX SAGE_glXDestroyGLXVideoSourceSGIX
#endif
#endif
#define GLX_EXT_visual_rating 1
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#define GLX_EXT_import_context 1
#ifdef SAGE_GLX_EXT_import_context
SAGEAPI PFNGLXQUERYCONTEXTINFOEXTPROC SAGE_glXQueryContextInfoEXT;
#ifndef glXQueryContextInfoEXT
#define glXQueryContextInfoEXT SAGE_glXQueryContextInfoEXT
#endif
SAGEAPI PFNGLXGETCONTEXTIDEXTPROC SAGE_glXGetContextIDEXT;
#ifndef glXGetContextIDEXT
#define glXGetContextIDEXT SAGE_glXGetContextIDEXT
#endif
SAGEAPI PFNGLXIMPORTCONTEXTEXTPROC SAGE_glXImportContextEXT;
#ifndef glXImportContextEXT
#define glXImportContextEXT SAGE_glXImportContextEXT
#endif
SAGEAPI PFNGLXFREECONTEXTEXTPROC SAGE_glXFreeContextEXT;
#ifndef glXFreeContextEXT
#define glXFreeContextEXT SAGE_glXFreeContextEXT
#endif
#endif
#define GLX_SGIX_fbconfig 1
#ifdef SAGE_GLX_SGIX_fbconfig
SAGEAPI PFNGLXGETFBCONFIGATTRIBSGIXPROC SAGE_glXGetFBConfigAttribSGIX;
#ifndef glXGetFBConfigAttribSGIX
#define glXGetFBConfigAttribSGIX SAGE_glXGetFBConfigAttribSGIX
#endif
SAGEAPI PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC SAGE_glXCreateGLXPixmapWithConfigSGIX;
#ifndef glXCreateGLXPixmapWithConfigSGIX
#define glXCreateGLXPixmapWithConfigSGIX SAGE_glXCreateGLXPixmapWithConfigSGIX
#endif
SAGEAPI PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC SAGE_glXCreateContextWithConfigSGIX;
#ifndef glXCreateContextWithConfigSGIX
#define glXCreateContextWithConfigSGIX SAGE_glXCreateContextWithConfigSGIX
#endif
SAGEAPI PFNGLXGETFBCONFIGFROMVISUALSGIXPROC SAGE_glXGetFBConfigFromVisualSGIX;
#ifndef glXGetFBConfigFromVisualSGIX
#define glXGetFBConfigFromVisualSGIX SAGE_glXGetFBConfigFromVisualSGIX
#endif
#endif
#define GLX_SGIX_pbuffer 1
#ifdef SAGE_GLX_SGIX_pbuffer
SAGEAPI PFNGLXCREATEGLXPBUFFERSGIXPROC SAGE_glXCreateGLXPbufferSGIX;
#ifndef glXCreateGLXPbufferSGIX
#define glXCreateGLXPbufferSGIX SAGE_glXCreateGLXPbufferSGIX
#endif
SAGEAPI PFNGLXDESTROYGLXPBUFFERSGIXPROC SAGE_glXDestroyGLXPbufferSGIX;
#ifndef glXDestroyGLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX SAGE_glXDestroyGLXPbufferSGIX
#endif
SAGEAPI PFNGLXQUERYGLXPBUFFERSGIXPROC SAGE_glXQueryGLXPbufferSGIX;
#ifndef glXQueryGLXPbufferSGIX
#define glXQueryGLXPbufferSGIX SAGE_glXQueryGLXPbufferSGIX
#endif
SAGEAPI PFNGLXSELECTEVENTSGIXPROC SAGE_glXSelectEventSGIX;
#ifndef glXSelectEventSGIX
#define glXSelectEventSGIX SAGE_glXSelectEventSGIX
#endif
SAGEAPI PFNGLXGETSELECTEDEVENTSGIXPROC SAGE_glXGetSelectedEventSGIX;
#ifndef glXGetSelectedEventSGIX
#define glXGetSelectedEventSGIX SAGE_glXGetSelectedEventSGIX
#endif
#endif
#define GLX_SGI_cushion 1
#ifdef SAGE_GLX_SGI_cushion
SAGEAPI PFNGLXCUSHIONSGIPROC SAGE_glXCushionSGI;
#ifndef glXCushionSGI
#define glXCushionSGI SAGE_glXCushionSGI
#endif
#endif
#define GLX_SGIX_video_resize 1
#ifdef SAGE_GLX_SGIX_video_resize
SAGEAPI PFNGLXBINDCHANNELTOWINDOWSGIXPROC SAGE_glXBindChannelToWindowSGIX;
#ifndef glXBindChannelToWindowSGIX
#define glXBindChannelToWindowSGIX SAGE_glXBindChannelToWindowSGIX
#endif
SAGEAPI PFNGLXCHANNELRECTSGIXPROC SAGE_glXChannelRectSGIX;
#ifndef glXChannelRectSGIX
#define glXChannelRectSGIX SAGE_glXChannelRectSGIX
#endif
SAGEAPI PFNGLXQUERYCHANNELRECTSGIXPROC SAGE_glXQueryChannelRectSGIX;
#ifndef glXQueryChannelRectSGIX
#define glXQueryChannelRectSGIX SAGE_glXQueryChannelRectSGIX
#endif
SAGEAPI PFNGLXQUERYCHANNELDELTASSGIXPROC SAGE_glXQueryChannelDeltasSGIX;
#ifndef glXQueryChannelDeltasSGIX
#define glXQueryChannelDeltasSGIX SAGE_glXQueryChannelDeltasSGIX
#endif
SAGEAPI PFNGLXCHANNELRECTSYNCSGIXPROC SAGE_glXChannelRectSyncSGIX;
#ifndef glXChannelRectSyncSGIX
#define glXChannelRectSyncSGIX SAGE_glXChannelRectSyncSGIX
#endif
#endif
#define GLX_SGIX_dmbuffer 1
#ifdef SAGE_GLX_SGIX_dmbuffer
SAGEAPI PFNGLXASSOCIATEDMPBUFFERSGIXPROC SAGE_glXAssociateDMPbufferSGIX;
#ifndef glXAssociateDMPbufferSGIX
#define glXAssociateDMPbufferSGIX SAGE_glXAssociateDMPbufferSGIX
#endif
#endif
#define GLX_SGIX_swap_group 1
#ifdef SAGE_GLX_SGIX_swap_group
SAGEAPI PFNGLXJOINSWAPGROUPSGIXPROC SAGE_glXJoinSwapGroupSGIX;
#ifndef glXJoinSwapGroupSGIX
#define glXJoinSwapGroupSGIX SAGE_glXJoinSwapGroupSGIX
#endif
#endif
#define GLX_SGIX_swap_barrier 1
#ifdef SAGE_GLX_SGIX_swap_barrier
SAGEAPI PFNGLXBINDSWAPBARRIERSGIXPROC SAGE_glXBindSwapBarrierSGIX;
#ifndef glXBindSwapBarrierSGIX
#define glXBindSwapBarrierSGIX SAGE_glXBindSwapBarrierSGIX
#endif
SAGEAPI PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC SAGE_glXQueryMaxSwapBarriersSGIX;
#ifndef glXQueryMaxSwapBarriersSGIX
#define glXQueryMaxSwapBarriersSGIX SAGE_glXQueryMaxSwapBarriersSGIX
#endif
#endif
#define GLX_SUN_get_transparent_index 1
#ifdef SAGE_GLX_SUN_get_transparent_index
SAGEAPI PFNGLXGETTRANSPARENTINDEXSUNPROC SAGE_glXGetTransparentIndexSUN;
#ifndef glXGetTransparentIndexSUN
#define glXGetTransparentIndexSUN SAGE_glXGetTransparentIndexSUN
#endif
#endif
#define GLX_MESA_copy_sub_buffer 1
#ifdef SAGE_GLX_MESA_copy_sub_buffer
SAGEAPI PFNGLXCOPYSUBBUFFERMESAPROC SAGE_glXCopySubBufferMESA;
#ifndef glXCopySubBufferMESA
#define glXCopySubBufferMESA SAGE_glXCopySubBufferMESA
#endif
#endif
#define GLX_MESA_pixmap_colormap 1
#ifdef SAGE_GLX_MESA_pixmap_colormap
SAGEAPI PFNGLXCREATEGLXPIXMAPMESAPROC SAGE_glXCreateGLXPixmapMESA;
#ifndef glXCreateGLXPixmapMESA
#define glXCreateGLXPixmapMESA SAGE_glXCreateGLXPixmapMESA
#endif
#endif
#define GLX_MESA_release_buffers 1
#ifdef SAGE_GLX_MESA_release_buffers
SAGEAPI PFNGLXRELEASEBUFFERSMESAPROC SAGE_glXReleaseBuffersMESA;
#ifndef glXReleaseBuffersMESA
#define glXReleaseBuffersMESA SAGE_glXReleaseBuffersMESA
#endif
#endif
#define GLX_MESA_set_3dfx_mode 1
#ifdef SAGE_GLX_MESA_set_3dfx_mode
SAGEAPI PFNGLXSET3DFXMODEMESAPROC SAGE_glXSet3DfxModeMESA;
#ifndef glXSet3DfxModeMESA
#define glXSet3DfxModeMESA SAGE_glXSet3DfxModeMESA
#endif
#endif
#define GLX_SGIX_visual_select_group 1
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#define GLX_OML_swap_method 1
#ifdef SAGE_GLX_OML_swap_method
#endif
#define GLX_OML_sync_control 1
#ifdef SAGE_GLX_OML_sync_control
SAGEAPI PFNGLXGETSYNCVALUESOMLPROC SAGE_glXGetSyncValuesOML;
#ifndef glXGetSyncValuesOML
#define glXGetSyncValuesOML SAGE_glXGetSyncValuesOML
#endif
SAGEAPI PFNGLXGETMSCRATEOMLPROC SAGE_glXGetMscRateOML;
#ifndef glXGetMscRateOML
#define glXGetMscRateOML SAGE_glXGetMscRateOML
#endif
SAGEAPI PFNGLXWAITFORMSCOMLPROC SAGE_glXWaitForMscOML;
#ifndef glXWaitForMscOML
#define glXWaitForMscOML SAGE_glXWaitForMscOML
#endif
SAGEAPI PFNGLXWAITFORSBCOMLPROC SAGE_glXWaitForSbcOML;
#ifndef glXWaitForSbcOML
#define glXWaitForSbcOML SAGE_glXWaitForSbcOML
#endif
#endif

SAGEAPI void sage_glx_init(void);

#endif
