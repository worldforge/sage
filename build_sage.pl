#! /usr/bin/perl -w

#write headers

$GLEXT_SAGE="sage/glext_sage.h";

open (GLEXT, "<glext.h") or die "Cannot open glext.h\n";
open (GLEXT_O, ">".$GLEXT_SAGE) or die "Cannot open glext.h\n";

$WAIT_FOR_ENDIF="false";

while (<GLEXT>) {
  print GLEXT_O $_;
  # This mayt require GLAPI at the start of the rtegexp for some glext.h files
  if ($_ =~ m|[A-Za-z]* APIENTRY [a-zA-Z0-9]* .*|) {
    ( $FUNC ) = ($_ =~ m|[A-Za-z]* APIENTRY ([a-zA-Z0-9]*) .*|);
    $PFNFUNC = "PFN" . uc($FUNC) . "PROC";
    push(@FUNC_DECLS_H , "SAGEAPI $PFNFUNC $FUNC;\n");
    push (@FUNC_DECLS_C, "$PFNFUNC $FUNC = 0;\n");
    push (@FUNC_LINKUP,"  $FUNC = ($PFNFUNC)SDL_GL_GetProcAddress(\"$FUNC\");\n");
  } elsif  ($_ =~ m|\#define GL_[A-Za-z0-9_]* 1$|) {
    ($DEF) = ($_ =~ m|\#define (GL_[A-Za-z0-9_]*) 1$|);
    push(@FUNC_DECLS_H, $_);
    push (@FUNC_DECLS_H, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_DECLS_C, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_LINKUP, "#ifdef SAGE_".$DEF."\n");
    print GLEXT_O "#define SAGE_".$DEF." 1\n";
    $WAIT_FOR_ENDIF="true";
  } elsif ($_ =~ m|\#endif|) {
    if ($WAIT_FOR_ENDIF eq "true") {
      push(@FUNC_DECLS_H, "#endif\n");
      push(@FUNC_DECLS_C, "#endif\n");
      push(@FUNC_LINKUP, "#endif\n");
      $WAIT_FOR_ENDIF="false";
    }
  } elsif ($_ =~ m|\#ifndef GL_[A-Za-z0-9_]*|) {
#    push(@FUNC_DECLS_H, $_);
  }
}

$FUNC_HEADER_FILE="sage/sage.h";
#Write header file
open (HEADER, ">".$FUNC_HEADER_FILE) or die "Can't open:" . $FUNC_HEADER_FILE . "\n";
print "Writing $FUNC_HEADER_FILE\n";
#Write license header
print HEADER "// This file may be redistributed and modified only under the terms of\n";
print HEADER "// the GNU Lesser General Public License (See COPYING for details).\n";
print HEADER "// Copyright (C) 2003 Simon Goodall\n";
print HEADER "\n";
print HEADER "#ifndef SAGE_H\n";
print HEADER "#define SAGE_H 1\n";
print HEADER "\n";
print HEADER "#ifdef __cplusplus\n";
print HEADER "#define EXTERN extern \"C\"\n";
print HEADER "#else\n";
print HEADER "#define EXTERN extern\n";
print HEADER "#endif\n";
print HEADER "\n";
print HEADER "#if defined(_WIN32) && !defined(__MINGW32__)\n";
print HEADER "  #ifdef BUILD_SAGE_DLL\n";
print HEADER "    #define SAGEAPI EXTERN __declspec(dllexport)\n";
print HEADER "  #else\n";
print HEADER "    #define SAGEAPI EXTERN __declspec(dllimport)\n";
print HEADER "  #endif\n";
print HEADER "#else\n";
print HEADER "  #define SAGEAPI EXTERN\n";
print HEADER "#endif\n";
print HEADER "\n";
print HEADER "#define __glext_h_ 1\n";
print HEADER "#include <GL/gl.h>\n";
print HEADER "#undef __glext_h_\n";
print HEADER "#include <$GLEXT_SAGE>\n";
for (@FUNC_DECLS_H) {
  print HEADER $_;
#  next;
}
print HEADER "#endif\n";
#Write c file
$FUNC_CODE_FILE="sage/sage.c";
#Write header file
open (CODE, ">".$FUNC_CODE_FILE) or die "Can't open:" . $FUNC_CODE_FILE . "\n";
print "Writing $FUNC_CODE_FILE\n";
#Write license header
print CODE "// This file may be redistributed and modified only under the terms of\n";
print CODE "// the GNU Lesser General Public License (See COPYING for details).\n";
print CODE "// Copyright (C) 2003 Simon Goodall\n";
print CODE "\n";
print CODE "#include <$FUNC_HEADER_FILE>\n";
print CODE "#include  \"SDL.h\"\n";
for (@FUNC_DECLS_C) {
  print CODE $_;
}
print CODE "\n";
print CODE "void sage_init(void) {\n";
for (@FUNC_LINKUP) {
  print CODE $_;
}
print CODE "}\n";
