// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef SAGE_GLX_H
#define SAGE_GLX_H 1

#define GLX_ARB_GET_PROC_ADDRESS 0
#define GLX_ARB_MULTISAMPLE 1
#define GLX_SGIS_MULTISAMPLE 2
#define GLX_EXT_VISUAL_INFO 3
#define GLX_SGI_SWAP_CONTROL 4
#define GLX_SGI_VIDEO_SYNC 5
#define GLX_SGI_MAKE_CURRENT_READ 6
#define GLX_SGIX_VIDEO_SOURCE 7
#define GLX_EXT_VISUAL_RATING 8
#define GLX_EXT_IMPORT_CONTEXT 9
#define GLX_SGIX_FBCONFIG 10
#define GLX_SGIX_PBUFFER 11
#define GLX_SGI_CUSHION 12
#define GLX_SGIX_VIDEO_RESIZE 13
#define GLX_SGIX_DMBUFFER 14
#define GLX_SGIX_SWAP_GROUP 15
#define GLX_SGIX_SWAP_BARRIER 16
#define GLX_SUN_GET_TRANSPARENT_INDEX 17
#define GLX_MESA_COPY_SUB_BUFFER 18
#define GLX_MESA_PIXMAP_COLORMAP 19
#define GLX_MESA_RELEASE_BUFFERS 20
#define GLX_MESA_SET_3DFX_MODE 21
#define GLX_SGIX_VISUAL_SELECT_GROUP 22
#define GLX_OML_SWAP_METHOD 23
#define GLX_OML_SYNC_CONTROL 24
#define LAST_EXTENSION 25

#include "sage/header.h"
#ifdef __glxext_h_
#error sage_glx.h needs to be included before gl.h
#endif
#define __glxext_h_ 1
#include <GL/gl.h>
#include <GL/glx.h>
#undef __glxext_h_
#include <sage/glxext_sage.h>

SAGEAPI int sage_glx_ext[LAST_EXTENSION];

#define GLX_VERSION_1_3 1
#ifdef SAGE_GLX_VERSION_1_3
SAGEAPI PFNGLXGETFBCONFIGATTRIBPROC glXGetFBConfigAttrib;
SAGEAPI PFNGLXCREATEWINDOWPROC glXCreateWindow;
SAGEAPI PFNGLXDESTROYWINDOWPROC glXDestroyWindow;
SAGEAPI PFNGLXCREATEPIXMAPPROC glXCreatePixmap;
SAGEAPI PFNGLXDESTROYPIXMAPPROC glXDestroyPixmap;
SAGEAPI PFNGLXCREATEPBUFFERPROC glXCreatePbuffer;
SAGEAPI PFNGLXDESTROYPBUFFERPROC glXDestroyPbuffer;
SAGEAPI PFNGLXQUERYDRAWABLEPROC glXQueryDrawable;
SAGEAPI PFNGLXCREATENEWCONTEXTPROC glXCreateNewContext;
SAGEAPI PFNGLXMAKECONTEXTCURRENTPROC glXMakeContextCurrent;
SAGEAPI PFNGLXGETCURRENTREADDRAWABLEPROC glXGetCurrentReadDrawable;
SAGEAPI PFNGLXQUERYCONTEXTPROC glXQueryContext;
SAGEAPI PFNGLXSELECTEVENTPROC glXSelectEvent;
SAGEAPI PFNGLXGETSELECTEDEVENTPROC glXGetSelectedEvent;
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
SAGEAPI PFNGLXSWAPINTERVALSGIPROC glXSwapIntervalSGI;
#endif
#define GLX_SGI_video_sync 1
#ifdef SAGE_GLX_SGI_video_sync
SAGEAPI PFNGLXGETVIDEOSYNCSGIPROC glXGetVideoSyncSGI;
SAGEAPI PFNGLXWAITVIDEOSYNCSGIPROC glXWaitVideoSyncSGI;
#endif
#define GLX_SGI_make_current_read 1
#ifdef SAGE_GLX_SGI_make_current_read
SAGEAPI PFNGLXMAKECURRENTREADSGIPROC glXMakeCurrentReadSGI;
SAGEAPI PFNGLXGETCURRENTREADDRAWABLESGIPROC glXGetCurrentReadDrawableSGI;
#endif
#define GLX_SGIX_video_source 1
#ifdef SAGE_GLX_SGIX_video_source
SAGEAPI PFNGLXCREATEGLXVIDEOSOURCESGIXPROC glXCreateGLXVideoSourceSGIX;
SAGEAPI PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC glXDestroyGLXVideoSourceSGIX;
#endif
#define GLX_EXT_visual_rating 1
#ifdef SAGE_GLX_EXT_visual_rating
#endif
#define GLX_EXT_import_context 1
#ifdef SAGE_GLX_EXT_import_context
SAGEAPI PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT;
SAGEAPI PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT;
SAGEAPI PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT;
SAGEAPI PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT;
#endif
#define GLX_SGIX_fbconfig 1
#ifdef SAGE_GLX_SGIX_fbconfig
SAGEAPI PFNGLXGETFBCONFIGATTRIBSGIXPROC glXGetFBConfigAttribSGIX;
SAGEAPI PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glXCreateGLXPixmapWithConfigSGIX;
SAGEAPI PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glXCreateContextWithConfigSGIX;
SAGEAPI PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glXGetFBConfigFromVisualSGIX;
#endif
#define GLX_SGIX_pbuffer 1
#ifdef SAGE_GLX_SGIX_pbuffer
SAGEAPI PFNGLXCREATEGLXPBUFFERSGIXPROC glXCreateGLXPbufferSGIX;
SAGEAPI PFNGLXDESTROYGLXPBUFFERSGIXPROC glXDestroyGLXPbufferSGIX;
SAGEAPI PFNGLXQUERYGLXPBUFFERSGIXPROC glXQueryGLXPbufferSGIX;
SAGEAPI PFNGLXSELECTEVENTSGIXPROC glXSelectEventSGIX;
SAGEAPI PFNGLXGETSELECTEDEVENTSGIXPROC glXGetSelectedEventSGIX;
#endif
#define GLX_SGI_cushion 1
#ifdef SAGE_GLX_SGI_cushion
SAGEAPI PFNGLXCUSHIONSGIPROC glXCushionSGI;
#endif
#define GLX_SGIX_video_resize 1
#ifdef SAGE_GLX_SGIX_video_resize
SAGEAPI PFNGLXBINDCHANNELTOWINDOWSGIXPROC glXBindChannelToWindowSGIX;
SAGEAPI PFNGLXCHANNELRECTSGIXPROC glXChannelRectSGIX;
SAGEAPI PFNGLXQUERYCHANNELRECTSGIXPROC glXQueryChannelRectSGIX;
SAGEAPI PFNGLXQUERYCHANNELDELTASSGIXPROC glXQueryChannelDeltasSGIX;
SAGEAPI PFNGLXCHANNELRECTSYNCSGIXPROC glXChannelRectSyncSGIX;
#endif
#define GLX_SGIX_dmbuffer 1
#ifdef SAGE_GLX_SGIX_dmbuffer
SAGEAPI PFNGLXASSOCIATEDMPBUFFERSGIXPROC glXAssociateDMPbufferSGIX;
#endif
#define GLX_SGIX_swap_group 1
#ifdef SAGE_GLX_SGIX_swap_group
SAGEAPI PFNGLXJOINSWAPGROUPSGIXPROC glXJoinSwapGroupSGIX;
#endif
#define GLX_SGIX_swap_barrier 1
#ifdef SAGE_GLX_SGIX_swap_barrier
SAGEAPI PFNGLXBINDSWAPBARRIERSGIXPROC glXBindSwapBarrierSGIX;
SAGEAPI PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glXQueryMaxSwapBarriersSGIX;
#endif
#define GLX_SUN_get_transparent_index 1
#ifdef SAGE_GLX_SUN_get_transparent_index
SAGEAPI PFNGLXGETTRANSPARENTINDEXSUNPROC glXGetTransparentIndexSUN;
#endif
#define GLX_MESA_copy_sub_buffer 1
#ifdef SAGE_GLX_MESA_copy_sub_buffer
SAGEAPI PFNGLXCOPYSUBBUFFERMESAPROC glXCopySubBufferMESA;
#endif
#define GLX_MESA_pixmap_colormap 1
#ifdef SAGE_GLX_MESA_pixmap_colormap
SAGEAPI PFNGLXCREATEGLXPIXMAPMESAPROC glXCreateGLXPixmapMESA;
#endif
#define GLX_MESA_release_buffers 1
#ifdef SAGE_GLX_MESA_release_buffers
SAGEAPI PFNGLXRELEASEBUFFERSMESAPROC glXReleaseBuffersMESA;
#endif
#define GLX_MESA_set_3dfx_mode 1
#ifdef SAGE_GLX_MESA_set_3dfx_mode
SAGEAPI PFNGLXSET3DFXMODEMESAPROC glXSet3DfxModeMESA;
#endif
#define GLX_SGIX_visual_select_group 1
#ifdef SAGE_GLX_SGIX_visual_select_group
#endif
#define GLX_OML_swap_method 1
#ifdef SAGE_GLX_OML_swap_method
#endif
#define GLX_OML_sync_control 1
#ifdef SAGE_GLX_OML_sync_control
SAGEAPI PFNGLXGETSYNCVALUESOMLPROC glXGetSyncValuesOML;
SAGEAPI PFNGLXGETMSCRATEOMLPROC glXGetMscRateOML;
SAGEAPI PFNGLXWAITFORMSCOMLPROC glXWaitForMscOML;
SAGEAPI PFNGLXWAITFORSBCOMLPROC glXWaitForSbcOML;
#endif

SAGEAPI void sage_glx_init(void);

#endif
