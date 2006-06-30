lib_LTLIBRARIES = libsage.la

libsage_la_LDFLAGS = -version-info @SAGE_VERSION_INFO@

INCLUDES=-I${top_srcdir}

if BUILD_DLL
libsage_la_CFLAGS=-DBUILD_SAGE_DLL
endif

if BUILD_WGL
SAGE_WGL_C = sage_wgl.c
SAGE_WGL_H = sage_wgl.h wglext_sage.h
else
SAGE_WGL_C=
SAGE_WGL_H=
endif

if BUILD_GLX
SAGE_GLX_C = sage_glx.c
SAGE_GLX_H = sage_glx.h glxext_sage.h
else
SAGE_GLX_C=
SAGE_GLX_H=
endif

libsage_la_SOURCES = \
	$(SAGE_GLX_C) $(SAGE_WGL_C) \
	check_extension.c \
	sage.c
	
libsagedir = $(includedir)/sage

libsage_HEADERS=\
	sage.h \
	utility.h \
	sage_fptr.h \
	GL.h GLU.h \
	$(SAGE_GLX_H) $(SAGE_WGL_H) \
	header.h

# Stuff to build dll

bin_SCRIPTS= @SAGE_DLL@
EXTRA_SCRIPTS = sage.dll

%.dll : lib%.la
	$(DLLWRAP) --output-def $*.def --driver-name=$(CXX) -o $@ .libs/lib$*.a $(LDFLAGS) $(LIBS)
	$(DLLTOOL) --dllname $@ --def $*.def --output-lib .libs/lib$*.dll.a

clean-local:
	rm -f sage.dll sage.def
