#! /usr/bin/perl -w

# This file generates three source files required to build sage
# This first part of this file extracts the extension names, the #defines
# and the function names. This process also creates a cutsom glext.h file 
# for use in sage The remaining parts of the file write the header and 
# code file.

# FIlename of our glext file
$GLEXT_SAGE="sage/glext_sage.h";

# Open glext.h for input
open (GLEXT, "<glext.h") or die "Cannot open glext.h\n";
# Open our glext.h for output
open (GLEXT_O, ">".$GLEXT_SAGE) or die "Cannot open glext.h\n";

#flag checking whether we need to add an endif or not
$WAIT_FOR_ENDIF="false";

#loop through every line in glext.h
while (<GLEXT>) {
  print GLEXT_O $_; # print line back into out glext
  # This mayt require GLAPI at the start of the rtegexp for some glext.h files
  # Grab function name
  if ($_ =~ m|[A-Za-z]* APIENTRY [a-zA-Z0-9]* .*|) {
    ( $FUNC ) = ($_ =~ m|[A-Za-z]* APIENTRY ([a-zA-Z0-9]*) .*|);
    $PFNFUNC = "PFN" . uc($FUNC) . "PROC";
    push(@FUNC_DECLS_H , "SAGEAPI $PFNFUNC $FUNC;\n");
    push (@FUNC_DECLS_C, "$PFNFUNC $FUNC = 0;\n");
    push (@FUNC_LINKUP,"  $FUNC = ($PFNFUNC)SDL_GL_GetProcAddress(\"$FUNC\");\n");
  # Grab #defines
  } elsif  ($_ =~ m|\#define GL_[A-Za-z0-9_]* 1$|) {
    ($DEF) = ($_ =~ m|\#define (GL_[A-Za-z0-9_]*) 1$|);
    push(@FUNC_DECLS_H, $_);
    push (@FUNC_DECLS_H, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_DECLS_C, "#ifdef SAGE_".$DEF."\n");
    push (@FUNC_LINKUP, "#ifdef SAGE_".$DEF."\n");
    if ($DEF =~ m|GL_VERSION|) {
    } else  {
      push (@BOOLS, $DEF);
    }
    print GLEXT_O "#define SAGE_".$DEF." 1\n";
    $WAIT_FOR_ENDIF="true";
  # grab endif if required
  } elsif ($_ =~ m|\#endif|) {
    if ($WAIT_FOR_ENDIF eq "true") {
      push(@FUNC_DECLS_H, "#endif\n");
      push(@FUNC_DECLS_C, "#endif\n");
      push(@FUNC_LINKUP, "#endif\n");
      $WAIT_FOR_ENDIF="false";
    }
  }
}

#build up extension checkking stuff
for (@BOOLS) {
  push(@BOOLS_DEF, "sage_ext[".uc($_)."] = isExtensionSupported(\"".$_."\");");
  push(@BOOLS_ENUM, "#define ".uc($_));
}

$FUNC_HEADER_FILE="sage/sage.h";
#Write header file
open (HEADER_FILE, ">".$FUNC_HEADER_FILE) or die "Can't open:" . $FUNC_HEADER_FILE . "\n";
print "Writing $FUNC_HEADER_FILE\n";
#Write license header
open (LICENSE, "<templates/license") or die "Can't open: templates/license\n";
while(<LICENSE>) { print HEADER_FILE $_; }
close LICENSE;

print HEADER_FILE "\n";
print HEADER_FILE "#ifndef SAGE_H\n";
print HEADER_FILE "#define SAGE_H 1\n";
print HEADER_FILE "\n";
$INDEX = 0;
for (@BOOLS_ENUM) {
  print HEADER_FILE $_." ".$INDEX."\n";
  $INDEX = $INDEX + 1;
}
print HEADER_FILE "#define LAST_EXTENSION ".$INDEX."\n";

print HEADER_FILE "\n";
print HEADER_FILE "int sage_ext[LAST_EXTENSION];\n";

print HEADER_FILE "\n";
print HEADER_FILE "#include <sage/header.h>\n";

print HEADER_FILE "#define __glext_h_ 1\n";
print HEADER_FILE "#include <GL/gl.h>\n";
print HEADER_FILE "#undef __glext_h_\n";
print HEADER_FILE "#include <$GLEXT_SAGE>\n";
for (@FUNC_DECLS_H) {
  print HEADER_FILE $_;
}
print HEADER_FILE "SAGEAPI void sage_init(void);\n";
print HEADER_FILE "#endif\n";

close HEADER_FILE;

# Write the code file

#name of code file
$FUNC_CODE_FILE="sage/sage.c";
#open code file for writing
open (CODE, ">".$FUNC_CODE_FILE) or die "Can't open:" . $FUNC_CODE_FILE . "\n";
print "Writing $FUNC_CODE_FILE\n";
#Write license header

# open license file
open (LICENSE, "<templates/license") or die "Can't open: templates/license\n";
while(<LICENSE>) { print CODE $_; }
close LICENSE;

#write in includes
print CODE "\n";
print CODE "#include <$FUNC_HEADER_FILE>\n";
print CODE "#include \"SDL.h\"\n";
print CODE "#include <sage/utility.h>\n";
print CODE "\n";

#start writing the function inits
for (@FUNC_DECLS_C) {
  print CODE $_;
}
print CODE "\n";

#start writing the init function
print CODE "void sage_init(void) {\n";
for (@FUNC_LINKUP) {
  print CODE $_;
}

# start writing the extension check code
for (@BOOLS_DEF) {
  print CODE "  ".$_."\n";
}
print CODE "}\n";

close CODE;
