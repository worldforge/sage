#! /usr/bin/perl -w

# This file generates three source files required to build sage
# This first part of this file extracts the extension names, the #defines
# and the function names. This process also creates a cutsom glext.h file 
# for use in sage The remaining parts of the file write the header and 
# code file.

# Filenames
$GLXEXT_FILE="glxext.h";
$GLXEXT_SAGE_FILE="sage/glxext_sage.h";
$SAGE_HEADER_FILE="sage/sage_glx.h";
$SAGE_CODE_FILE="sage/sage_glx.c";
$LICENSE_FILE="templates/license";

#regular expressions
$FUNCTION_REGEXP="extern [A-Za-z0-9]* ([a-zA-Z0-9]*) .*";
$DEFINE_REGEXP="\#define (GLX_[A-Za-z0-9_]*) 1\$";

# Open glext.h for input
open (GLXEXT, "<$GLXEXT_FILE") or die "Cannot open $GLXEXT_FILE\n";
# Open our glext.h for output
open (GLXEXT_SAGE, ">$GLXEXT_SAGE_FILE") or die "Cannot open $GLXEXT_SAGE_FILE\n";

#flag checking whether we need to add an endif or not
$WAIT_FOR_ENDIF="false";

#loop through every line in glext.h
while (<GLXEXT>) {
  print GLXEXT_SAGE $_; # print line back into out glext
  # Grab function name
  if ($_ =~ m|$FUNCTION_REGEXP|) {
    ($FUNCTION) = ($_ =~ m|$FUNCTION_REGEXP|); # Extract function name
    $PFN_FUNCTION = "PFN".uc($FUNCTION)."PROC"; # make the typedef name


    push(@FUNCTION_HEADER , "SAGEAPI $PFN_FUNCTION SAGE_$FUNCTION;\n"); # declare function for header
    push(@FUNCTION_HEADER, "#ifndef $FUNCTION\n");
    push(@FUNCTION_HEADER, "#define $FUNCTION SAGE_$FUNCTION\n");
    push(@FUNCTION_HEADER, "#endif\n");


    push (@FUNCTION_CODE, "$PFN_FUNCTION SAGE_$FUNCTION = NULL;\n"); # declaraion of function in c file
    push (@FUNCTION_INIT,"  SAGE_$FUNCTION = ($PFN_FUNCTION)SDL_GL_GetProcAddress(\"$FUNCTION\");\n"); # linkup function ptr 
  # Grab #defines
  } elsif  ($_ =~ m|$DEFINE_REGEXP|) {
    ($DEF) = ($_ =~ m|$DEFINE_REGEXP|); # extract #define name
    push(@FUNCTION_HEADER, $_); # write into header
    # the SAGE_$DEF is a check put into glext_sage.h to say that glext.h defined the function, so we need
    # to link it up. If its defined elsewhere then SAGE_$DEF will  not be defined and we can ignore it
    push (@FUNCTION_HEADER, "#ifdef SAGE_$DEF\n");
    push (@FUNCTION_CODE, "#ifdef SAGE_$DEF\n");
    push (@FUNCTION_INIT, "#ifdef SAGE_$DEF\n");
    if ($DEF =~ m|GLX_VERSION|) { # ignore GL_VERSION for BOOLS def
    } else  {
      push (@BOOLS, $DEF);
    }
    print GLXEXT_SAGE "#define SAGE_$DEF 1\n";
    $WAIT_FOR_ENDIF="true"; # we now need to write a corresponding endif when its next found
  # grab endif if required
  } elsif ($_ =~ m|\#endif|) { # write the endif now we have it
    if ($WAIT_FOR_ENDIF eq "true") {
      push(@FUNCTION_HEADER, "#endif\n");
      push(@FUNCTION_CODE, "#endif\n");
      push(@FUNCTION_INIT, "#endif\n");
      $WAIT_FOR_ENDIF="false";
    }
  }
}

#copy into two arrays - we use this twice (prob a better way to do this)
for (@BOOLS) {
  push(@BOOLS_DEF, $_);
  push(@BOOLS_ENUM, $_);
}

#Write header file
open (SAGE_HEADER, ">$SAGE_HEADER_FILE") or die "Can't open: $SAGE_HEADER_FILE\n";
print "Writing $SAGE_HEADER_FILE\n";

#Write autogen comment
print SAGE_HEADER "/* This file is autogenerated by sage_build_glx.pl */\n";

#Write license header
open (LICENSE, "<$LICENSE_FILE") or die "Can't open: $LICENSE_FILE\n";
while(<LICENSE>) { print SAGE_HEADER $_; }
close LICENSE;
print SAGE_HEADER "\n";

# Write header check
print SAGE_HEADER "#ifndef SAGE_GLX_H\n";
print SAGE_HEADER "#define SAGE_GLX_H 1\n";
print SAGE_HEADER "\n";

# Write defines for use in extensions array
$INDEX = 0; # Set counter to zero
for (@BOOLS_ENUM) {
  print SAGE_HEADER "#define ".uc($_)." $INDEX\n"; # write a #define
  $INDEX = $INDEX + 1; # increment counter
}
# This allows use to determine the size of the extensions array
print SAGE_HEADER "#define SAGE_GLX_LAST_EXTENSION ".$INDEX."\n\n";

#include the SAGEAPI stuff
print SAGE_HEADER "#include \"sage/header.h\"\n";
#include GL for defs
# define __glext_h_ so we dont pull in the standard glext.h file when
# we include gl.h
print SAGE_HEADER "#ifdef __glxext_h_\n";
print SAGE_HEADER "#error sage_glx.h needs to be included before gl.h\n";
print SAGE_HEADER "#endif\n";
print SAGE_HEADER "#define __glxext_h_ 1\n";
print SAGE_HEADER "#include "GL.h"\n";
print SAGE_HEADER "#include "GLX.h"\n";
print SAGE_HEADER "#undef __glxext_h_\n"; # undef this so we can use our own glext.h
print SAGE_HEADER "#include <$GLXEXT_SAGE_FILE>\n\n";
#define the extensions array
print SAGE_HEADER "SAGEAPI int sage_glx_ext[SAGE_GLX_LAST_EXTENSION];\n\n";


#print the function declarations and #if's generated from glext.h
for (@FUNCTION_HEADER) {
  print SAGE_HEADER $_;
}
#add the init function prototype
print SAGE_HEADER "\nSAGEAPI void sage_glx_init(void);\n\n";
#endif for header check
print SAGE_HEADER "#endif\n";
#close file handle
close SAGE_HEADER;

# Write the code file

#open code file for writing
open (SAGE_CODE, ">$SAGE_CODE_FILE") or die "Can't open: $SAGE_CODE_FILE\n";
print "Writing $SAGE_CODE_FILE\n";

#Write autogen comment
print SAGE_CODE "/* This file is autogenerated by sage_build_glx.pl */\n";
#Write license header
open (LICENSE, "<$LICENSE_FILE") or die "Can't open: $LICENSE_FILE\n";
while(<LICENSE>) { print SAGE_CODE $_; }
close LICENSE;
print SAGE_CODE "\n";

#write the #includes
print SAGE_CODE "#include <$SAGE_HEADER_FILE>\n";
print SAGE_CODE "#include \"SDL.h\"\n";
print SAGE_CODE "#include <sage/utility.h>\n";
print SAGE_CODE "\n";

#start writing the function inits
for (@FUNCTION_CODE) {
  print SAGE_CODE $_;
}
print SAGE_CODE "\n";

#start writing the init function
print SAGE_CODE "int sage_glx_ext[SAGE_GLX_LAST_EXTENSION];\n\n";
print SAGE_CODE "void sage_glx_init(void) {\n";
for (@FUNCTION_INIT) {
  print SAGE_CODE $_;
}

# start writing the extension check code
for (@BOOLS_DEF) {
  print SAGE_CODE " sage_glx_ext[".uc($_)."] = isExtensionSupported(\"$_\");\n";
}
#write closing brace for function
print SAGE_CODE "}\n";
#close file handle
close SAGE_CODE;
