// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003-2004 Simon Goodall

#include <sage/sage_wgl.h>
#include "SDL.h"
#include <sage/utility.h>

#ifdef SAGE_WGL_ARB_buffer_region
PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB = NULL;
PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB = NULL;
PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB = NULL;
PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB = NULL;
#endif
#ifdef SAGE_WGL_ARB_multisample
#endif
#ifdef SAGE_WGL_ARB_extensions_string
PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB = NULL;
#endif
#ifdef SAGE_WGL_ARB_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB = NULL;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB = NULL;
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB = NULL;
#endif
#ifdef SAGE_WGL_ARB_make_current_read
PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB = NULL;
PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB = NULL;
#endif
#ifdef SAGE_WGL_ARB_pbuffer
PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB = NULL;
PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB = NULL;
PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB = NULL;
PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB = NULL;
PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB = NULL;
#endif
#ifdef SAGE_WGL_ARB_render_texture
PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB = NULL;
PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB = NULL;
PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB = NULL;
#endif
#ifdef SAGE_WGL_EXT_display_color_table
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT = NULL;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT = NULL;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT = NULL;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_extensions_string
PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_make_current_read
PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT = NULL;
PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_pbuffer
PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT = NULL;
PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT = NULL;
PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT = NULL;
PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT = NULL;
PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT = NULL;
PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_swap_control
PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT = NULL;
PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT = NULL;
#endif
#ifdef SAGE_WGL_EXT_depth_float
#endif
#ifdef SAGE_WGL_NV_vertex_array_range
PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV = NULL;
PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV = NULL;
#endif
#ifdef SAGE_WGL_3DFX_multisample
#endif
#ifdef SAGE_WGL_EXT_multisample
#endif
#ifdef SAGE_WGL_OML_sync_control
PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML = NULL;
PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML = NULL;
PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML = NULL;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML = NULL;
PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML = NULL;
PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML = NULL;
#endif
#ifdef SAGE_WGL_I3D_digital_video_control
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D = NULL;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D = NULL;
#endif
#ifdef SAGE_WGL_I3D_gamma
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D = NULL;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D = NULL;
PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D = NULL;
PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D = NULL;
#endif
#ifdef SAGE_WGL_I3D_genlock
PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D = NULL;
PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D = NULL;
PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D = NULL;
PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D = NULL;
PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D = NULL;
PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D = NULL;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D = NULL;
PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D = NULL;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D = NULL;
PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D = NULL;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D = NULL;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D = NULL;
#endif
#ifdef SAGE_WGL_I3D_image_buffer
PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D = NULL;
PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D = NULL;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D = NULL;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D = NULL;
#endif
#ifdef SAGE_WGL_I3D_swap_frame_lock
PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D = NULL;
PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D = NULL;
PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D = NULL;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D = NULL;
#endif
#ifdef SAGE_WGL_I3D_swap_frame_usage
PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D = NULL;
PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D = NULL;
PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D = NULL;
PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D = NULL;
#endif

int sage_wgl_ext[LAST_EXTENSION];

void sage_wgl_init(void) {
#ifdef SAGE_WGL_ARB_buffer_region
  wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglCreateBufferRegionARB");
  wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglDeleteBufferRegionARB");
  wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglSaveBufferRegionARB");
  wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)SDL_GL_GetProcAddress("wglRestoreBufferRegionARB");
#endif
#ifdef SAGE_WGL_ARB_multisample
#endif
#ifdef SAGE_WGL_ARB_extensions_string
  wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)SDL_GL_GetProcAddress("wglGetExtensionsStringARB");
#endif
#ifdef SAGE_WGL_ARB_pixel_format
  wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribivARB");
  wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribfvARB");
  wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)SDL_GL_GetProcAddress("wglChoosePixelFormatARB");
#endif
#ifdef SAGE_WGL_ARB_make_current_read
  wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)SDL_GL_GetProcAddress("wglMakeContextCurrentARB");
  wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC)SDL_GL_GetProcAddress("wglGetCurrentReadDCARB");
#endif
#ifdef SAGE_WGL_ARB_pbuffer
  wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)SDL_GL_GetProcAddress("wglCreatePbufferARB");
  wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)SDL_GL_GetProcAddress("wglGetPbufferDCARB");
  wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)SDL_GL_GetProcAddress("wglReleasePbufferDCARB");
  wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)SDL_GL_GetProcAddress("wglDestroyPbufferARB");
  wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)SDL_GL_GetProcAddress("wglQueryPbufferARB");
#endif
#ifdef SAGE_WGL_ARB_render_texture
  wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)SDL_GL_GetProcAddress("wglBindTexImageARB");
  wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)SDL_GL_GetProcAddress("wglReleaseTexImageARB");
  wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)SDL_GL_GetProcAddress("wglSetPbufferAttribARB");
#endif
#ifdef SAGE_WGL_EXT_display_color_table
  wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglCreateDisplayColorTableEXT");
  wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglLoadDisplayColorTableEXT");
  wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglBindDisplayColorTableEXT");
  wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)SDL_GL_GetProcAddress("wglDestroyDisplayColorTableEXT");
#endif
#ifdef SAGE_WGL_EXT_extensions_string
  wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)SDL_GL_GetProcAddress("wglGetExtensionsStringEXT");
#endif
#ifdef SAGE_WGL_EXT_make_current_read
  wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)SDL_GL_GetProcAddress("wglMakeContextCurrentEXT");
  wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)SDL_GL_GetProcAddress("wglGetCurrentReadDCEXT");
#endif
#ifdef SAGE_WGL_EXT_pbuffer
  wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglCreatePbufferEXT");
  wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)SDL_GL_GetProcAddress("wglGetPbufferDCEXT");
  wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)SDL_GL_GetProcAddress("wglReleasePbufferDCEXT");
  wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglDestroyPbufferEXT");
  wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)SDL_GL_GetProcAddress("wglQueryPbufferEXT");
#endif
#ifdef SAGE_WGL_EXT_pixel_format
  wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribivEXT");
  wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)SDL_GL_GetProcAddress("wglGetPixelFormatAttribfvEXT");
  wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)SDL_GL_GetProcAddress("wglChoosePixelFormatEXT");
#endif
#ifdef SAGE_WGL_EXT_swap_control
  wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)SDL_GL_GetProcAddress("wglSwapIntervalEXT");
  wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)SDL_GL_GetProcAddress("wglGetSwapIntervalEXT");
#endif
#ifdef SAGE_WGL_EXT_depth_float
#endif
#ifdef SAGE_WGL_NV_vertex_array_range
  wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC)SDL_GL_GetProcAddress("wglAllocateMemoryNV");
  wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC)SDL_GL_GetProcAddress("wglFreeMemoryNV");
#endif
#ifdef SAGE_WGL_3DFX_multisample
#endif
#ifdef SAGE_WGL_EXT_multisample
#endif
#ifdef SAGE_WGL_OML_sync_control
  wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC)SDL_GL_GetProcAddress("wglGetSyncValuesOML");
  wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC)SDL_GL_GetProcAddress("wglGetMscRateOML");
  wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC)SDL_GL_GetProcAddress("wglSwapBuffersMscOML");
  wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)SDL_GL_GetProcAddress("wglSwapLayerBuffersMscOML");
  wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC)SDL_GL_GetProcAddress("wglWaitForMscOML");
  wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC)SDL_GL_GetProcAddress("wglWaitForSbcOML");
#endif
#ifdef SAGE_WGL_I3D_digital_video_control
  wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)SDL_GL_GetProcAddress("wglGetDigitalVideoParametersI3D");
  wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)SDL_GL_GetProcAddress("wglSetDigitalVideoParametersI3D");
#endif
#ifdef SAGE_WGL_I3D_gamma
  wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)SDL_GL_GetProcAddress("wglGetGammaTableParametersI3D");
  wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)SDL_GL_GetProcAddress("wglSetGammaTableParametersI3D");
  wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC)SDL_GL_GetProcAddress("wglGetGammaTableI3D");
  wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC)SDL_GL_GetProcAddress("wglSetGammaTableI3D");
#endif
#ifdef SAGE_WGL_I3D_genlock
  wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC)SDL_GL_GetProcAddress("wglEnableGenlockI3D");
  wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC)SDL_GL_GetProcAddress("wglDisableGenlockI3D");
  wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC)SDL_GL_GetProcAddress("wglIsEnabledGenlockI3D");
  wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC)SDL_GL_GetProcAddress("wglGenlockSourceI3D");
  wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC)SDL_GL_GetProcAddress("wglGetGenlockSourceI3D");
  wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)SDL_GL_GetProcAddress("wglGenlockSourceEdgeI3D");
  wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)SDL_GL_GetProcAddress("wglGetGenlockSourceEdgeI3D");
  wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)SDL_GL_GetProcAddress("wglGenlockSampleRateI3D");
  wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)SDL_GL_GetProcAddress("wglGetGenlockSampleRateI3D");
  wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)SDL_GL_GetProcAddress("wglGenlockSourceDelayI3D");
  wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)SDL_GL_GetProcAddress("wglGetGenlockSourceDelayI3D");
  wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)SDL_GL_GetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
#endif
#ifdef SAGE_WGL_I3D_image_buffer
  wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)SDL_GL_GetProcAddress("wglCreateImageBufferI3D");
  wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)SDL_GL_GetProcAddress("wglDestroyImageBufferI3D");
  wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)SDL_GL_GetProcAddress("wglAssociateImageBufferEventsI3D");
  wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)SDL_GL_GetProcAddress("wglReleaseImageBufferEventsI3D");
#endif
#ifdef SAGE_WGL_I3D_swap_frame_lock
  wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC)SDL_GL_GetProcAddress("wglEnableFrameLockI3D");
  wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC)SDL_GL_GetProcAddress("wglDisableFrameLockI3D");
  wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)SDL_GL_GetProcAddress("wglIsEnabledFrameLockI3D");
  wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)SDL_GL_GetProcAddress("wglQueryFrameLockMasterI3D");
#endif
#ifdef SAGE_WGL_I3D_swap_frame_usage
  wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC)SDL_GL_GetProcAddress("wglGetFrameUsageI3D");
  wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)SDL_GL_GetProcAddress("wglBeginFrameTrackingI3D");
  wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC)SDL_GL_GetProcAddress("wglEndFrameTrackingI3D");
  wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)SDL_GL_GetProcAddress("wglQueryFrameTrackingI3D");
#endif
 sage_wgl_ext[WGL_ARB_BUFFER_REGION] = isExtensionSupported("WGL_ARB_buffer_region");
 sage_wgl_ext[WGL_ARB_MULTISAMPLE] = isExtensionSupported("WGL_ARB_multisample");
 sage_wgl_ext[WGL_ARB_EXTENSIONS_STRING] = isExtensionSupported("WGL_ARB_extensions_string");
 sage_wgl_ext[WGL_ARB_PIXEL_FORMAT] = isExtensionSupported("WGL_ARB_pixel_format");
 sage_wgl_ext[WGL_ARB_MAKE_CURRENT_READ] = isExtensionSupported("WGL_ARB_make_current_read");
 sage_wgl_ext[WGL_ARB_PBUFFER] = isExtensionSupported("WGL_ARB_pbuffer");
 sage_wgl_ext[WGL_ARB_RENDER_TEXTURE] = isExtensionSupported("WGL_ARB_render_texture");
 sage_wgl_ext[WGL_EXT_DISPLAY_COLOR_TABLE] = isExtensionSupported("WGL_EXT_display_color_table");
 sage_wgl_ext[WGL_EXT_EXTENSIONS_STRING] = isExtensionSupported("WGL_EXT_extensions_string");
 sage_wgl_ext[WGL_EXT_MAKE_CURRENT_READ] = isExtensionSupported("WGL_EXT_make_current_read");
 sage_wgl_ext[WGL_EXT_PBUFFER] = isExtensionSupported("WGL_EXT_pbuffer");
 sage_wgl_ext[WGL_EXT_PIXEL_FORMAT] = isExtensionSupported("WGL_EXT_pixel_format");
 sage_wgl_ext[WGL_EXT_SWAP_CONTROL] = isExtensionSupported("WGL_EXT_swap_control");
 sage_wgl_ext[WGL_EXT_DEPTH_FLOAT] = isExtensionSupported("WGL_EXT_depth_float");
 sage_wgl_ext[WGL_NV_VERTEX_ARRAY_RANGE] = isExtensionSupported("WGL_NV_vertex_array_range");
 sage_wgl_ext[WGL_3DFX_MULTISAMPLE] = isExtensionSupported("WGL_3DFX_multisample");
 sage_wgl_ext[WGL_EXT_MULTISAMPLE] = isExtensionSupported("WGL_EXT_multisample");
 sage_wgl_ext[WGL_OML_SYNC_CONTROL] = isExtensionSupported("WGL_OML_sync_control");
 sage_wgl_ext[WGL_I3D_DIGITAL_VIDEO_CONTROL] = isExtensionSupported("WGL_I3D_digital_video_control");
 sage_wgl_ext[WGL_I3D_GAMMA] = isExtensionSupported("WGL_I3D_gamma");
 sage_wgl_ext[WGL_I3D_GENLOCK] = isExtensionSupported("WGL_I3D_genlock");
 sage_wgl_ext[WGL_I3D_IMAGE_BUFFER] = isExtensionSupported("WGL_I3D_image_buffer");
 sage_wgl_ext[WGL_I3D_SWAP_FRAME_LOCK] = isExtensionSupported("WGL_I3D_swap_frame_lock");
 sage_wgl_ext[WGL_I3D_SWAP_FRAME_USAGE] = isExtensionSupported("WGL_I3D_swap_frame_usage");
}
