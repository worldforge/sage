lib_LTLIBRARIES = libsage.la

libsage_la_LDFLAGS = -version-info @SAGE_VERSION_INFO@

INCLUDES=-I${top_srcdir}

if BUILD_DLL
libsage_la_CFLAGS=-DBUILD_SAGE_DLL
endif

libsage_la_SOURCES = \
	check_extension.c \
	sage.c
	
libsagedir = $(includedir)/sage

libsage_HEADERS=\
	sage.h \
	utility.h \
	sage_fptr.h \
	GL.h GLU.h \
	header.h

# Stuff to build dll

bin_SCRIPTS= @SAGE_DLL@
EXTRA_SCRIPTS = sage.dll

%.dll : lib%.la
	$(DLLWRAP) --output-def $*.def --driver-name=$(CXX) -o $@ .libs/lib$*.a $(LDFLAGS) $(LIBS)
	$(DLLTOOL) --dllname $@ --def $*.def --output-lib .libs/lib$*.dll.a

clean-local:
	rm -f sage.dll sage.def
