dnl Initialise autoconf

AC_INIT([sage], [0.2.0])
AC_CONFIG_SRCDIR([sage/sage.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

dnl Detect the canonical host and target build environment
AC_CANONICAL_SYSTEM

SAGE_CURRENT=2
SAGE_REVISION=0
SAGE_AGE=0
SAGE_VERSION_INFO=$SAGE_CURRENT:$SAGE_REVISION:$SAGE_AGE

AC_SUBST(SAGE_VERSION_INFO)

SAGE_REQUIRES=""

AM_INIT_AUTOMAKE([check-news])

dnl Need libtool
AC_LIBTOOL_WIN32_DLL
AM_PROG_LIBTOOL
AC_PROG_CC
#AC_MINGW32
#AC_CYGWIN
AC_EXEEXT

case "$target" in
  *-*-darwin* | *-*-macos*)
  AC_TRY_COMPILE([
    #include <OpenGL/gl.h>
  ],[
  ],[
   LIBS="$LIBS -framework OpenGL -framework AGL"
  ],[
    AC_TRY_COMPILE([
      #include <GL/gl.h>
    ],[
    ],[
     LIBS="$LIBS -lGL"
    ],[
      AC_MSG_ERROR(Cannot find OpenGL)
    ])
  ])
  ;;
  *-*-linux*)
  AC_PATH_X
  AC_PATH_XTRA

  AC_CHECK_LIB(GL,glViewport, [
    LIBS="$LIBS -lGL"
  ],[
    AC_MSG_ERROR(Couldn't find OpenGL)
  ])
esac

case "$host_os" in
  *cygwin* | *mingw32*)
    LIBS="$LIBS -lopengl32"
esac

if test "$enable_shared" = yes; then
  if test "x$CYGWIN" = xyes -o "x$MINGW32" = xyes; then
    SAGE_DLL=sage.dll
    AC_SUBST(SAGE_DLL)
    AC_CHECK_TOOL(DLLWRAP, dllwrap)
    AC_CHECK_TOOL(DLLTOOL, dlltool)
    BUILD_IT=true
  else
    BUILD_IT=false
  fi
else
  BUILD_IT=false
fi

AM_CONDITIONAL(BUILD_DLL, test x$SAGE_DLL = xsage.dll, true, false)
AC_SUBST(BUILD_IT)


AC_ARG_ENABLE(debug,
  [  --enable-debug	enable debug information [default=no]],
  [
    if test "$enableval" = "yes"; then
      CFLAGS="$CFLAGS -ggdb -O0 -DDEBUG"
    else
      CFLAGS="$CFLAGS -O3 -DNDEBUG"
    fi
  ],[
    CFLAGS="$CFLAGS -O3 -DNDEBUG"
  ]
)

dnl Set compile only flag
CFLAGS="$CFLAGS -DSAGE_COMPILE"

dnl Check SDL
SDL_VERSION=1.2.2
PKG_CHECK_MODULES(SDLPKG, sdl >= $SDL_VERSION,
        [
                CFLAGS="$CFLAGS $SDLPKG_CFLAGS"
                LIBS="$LIBS $SDLPKG_LIBS"
        ],
	AC_MSG_ERROR(Couldn't find SDL or insufficent version found  ($SDLPKG_PKG_ERRORS). Please goto http://www.libsdl.org/ and get at least version $SDL_VERSION)
)
  
SAGE_LIBS="-lsage"
SAGE_CFLAGS=""

AC_SUBST(SAGE_REQUIRES)
AC_SUBST(SAGE_LIBS)
AC_SUBST(SAGE_CFLAGS)

AC_SUBST(PREFIX)


dnl Generate files
AC_OUTPUT([
	Makefile
	sage/Makefile
	sage/header.h
	templates/Makefile
	sage.spec
	sage.pc
	man/Makefile
	man/man3/Makefile
])
