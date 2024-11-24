/* Generated automatically by H5make_libsettings -- do not edit */



/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://www.hdfgroup.org/licenses.               *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Created:		Jan 24, 2023
 *			u0_a101@localhost
 *
 * Purpose:		This machine-generated source code contains
 *			information about the library build configuration
 *
 * Modifications:
 *
 *	DO NOT MAKE MODIFICATIONS TO THIS FILE!
 *	It was generated by code in `H5make_libsettings.c'.
 *
 *-------------------------------------------------------------------------
 */

#include "H5private.h"
H5_GCC_DIAG_OFF("larger-than=")

H5_CLANG_DIAG_OFF("overlength-strings")

const char H5libhdf5_settings[]=
	"        SUMMARY OF THE HDF5 CONFIGURATION\n"
	"        =================================\n"
	"\n"
	"General Information:\n"
	"-------------------\n"
	"                   HDF5 Version: 1.14.0\n"
	"                  Configured on: 2023-01-24\n"
	"                  Configured by: Unix Makefiles\n"
	"                    Host system: Android-4.9.82-perf+\n"
	"              Uname information: Android\n"
	"                       Byte sex: little-endian\n"
	"             Installation point: /data/data/Ninja.coder.Ghostemane.code/files/usr\n"
	"\n"
	"Compiling Options:\n"
	"------------------\n"
	"                     Build Mode: Release\n"
	"              Debugging Symbols: OFF\n"
	"                        Asserts: OFF\n"
	"                      Profiling: OFF\n"
	"             Optimization Level: OFF\n"
	"\n"
	"Linking Options:\n"
	"----------------\n"
	"                      Libraries: \n"
	"  Statically Linked Executables: OFF\n"
	"                        LDFLAGS: -Wl,--as-needed -L/data/data/Ninja.coder.Ghostemane.code/files/usr/lib\n"
	"                     H5_LDFLAGS: \n"
	"                     AM_LDFLAGS: \n"
	"                Extra libraries: m;dl\n"
	"                       Archiver: /data/data/Ninja.coder.Ghostemane.code/files/usr/bin/ar\n"
	"                         Ranlib: /data/data/Ninja.coder.Ghostemane.code/files/usr/bin/ranlib\n"
	"\n"
	"Languages:\n"
	"----------\n"
	"                              C: YES\n"
	"                     C Compiler: /data/data/Ninja.coder.Ghostemane.code/files/usr/bin/clang 15.0.7\n"
	"                       CPPFLAGS: \n"
	"                    H5_CPPFLAGS: \n"
	"                    AM_CPPFLAGS: \n"
	"                         CFLAGS:  -std=c99 -Oz -fstack-protector-strong -I/data/data/Ninja.coder.Ghostemane.code/files/usr/include\n"
	"                      H5_CFLAGS: -Wall;-Warray-bounds;-Wcast-qual;-Wconversion;-Wdouble-promotion;-Wextra;-Wformat=2;-Wframe-larger-than=16384;-Wimplicit-fallthrough;-Wnull-dereference;-Wunused-const-variable;-Wwrite-strings;-Wpedantic;-Wvolatile-register-var;-Wno-c++-compat;-Wbad-function-cast;-Wimplicit-function-declaration;-Wincompatible-pointer-types;-Wmissing-declarations;-Wpacked;-Wshadow;-Wswitch;-Wno-error=incompatible-pointer-types-discards-qualifiers;-Wunused-function;-Wunused-variable;-Wunused-parameter;-Wcast-align;-Wformat;-Wno-missing-noreturn\n"
	"                      AM_CFLAGS: \n"
	"               Shared C Library: YES\n"
	"               Static C Library: YES\n"
	"\n"
	"                        Fortran: OFF\n"
	"               Fortran Compiler:  \n"
	"                  Fortran Flags: \n"
	"               H5 Fortran Flags: \n"
	"               AM Fortran Flags: \n"
	"         Shared Fortran Library: YES\n"
	"         Static Fortran Library: YES\n"
	"               Module Directory: /data/data/Ninja.coder.Ghostemane.code/files/files/home/termux.libhdf5.build/mod\n"
	"\n"
	"                            C++: ON\n"
	"                   C++ Compiler: /data/data/Ninja.coder.Ghostemane.code/files/usr/bin/clang++ 15.0.7\n"
	"                      C++ Flags:  -Oz -fstack-protector-strong -I/data/data/Ninja.coder.Ghostemane.code/files/usr/include\n"
	"                   H5 C++ Flags: -Wall;-Warray-bounds;-Wcast-qual;-Wconversion;-Wdouble-promotion;-Wextra;-Wformat=2;-Wframe-larger-than=16384;-Wimplicit-fallthrough;-Wnull-dereference;-Wunused-const-variable;-Wwrite-strings;-Wpedantic;-Wvolatile-register-var;-Wno-c++-compat;-Wno-missing-noreturn\n"
	"                   AM C++ Flags: \n"
	"             Shared C++ Library: YES\n"
	"             Static C++ Library: YES\n"
	"\n"
	"                            JAVA: OFF\n"
	"                 JAVA Compiler:  \n"
	"\n"
	"Features:\n"
	"---------\n"
	"                     Parallel HDF5: OFF\n"
	"  Parallel Filtered Dataset Writes: \n"
	"                Large Parallel I/O: \n"
	"                High-level library: ON\n"
	"Dimension scales w/ new references: \n"
	"                  Build HDF5 Tests: OFF\n"
	"                  Build HDF5 Tools: ON\n"
	"                   Build GIF Tools: OFF\n"
	"                      Threadsafety: OFF\n"
	"               Default API mapping: v114\n"
	"    With deprecated public symbols: ON\n"
	"            I/O filters (external):  DEFLATE\n"
	"                        Direct VFD: \n"
	"                        Mirror VFD: \n"
	"                     Subfiling VFD: \n"
	"                (Read-Only) S3 VFD: \n"
	"              (Read-Only) HDFS VFD: \n"
	"    Packages w/ extra debug output: \n"
	"                       API Tracing: OFF\n"
	"              Using memory checker: OFF\n"
	"            Function Stack Tracing: OFF\n"
	"                  Use file locking: best-effort\n"
	"         Strict File Format Checks: OFF\n"
	"      Optimization Instrumentation: \n"
;

H5_GCC_DIAG_ON("larger-than=")
H5_CLANG_DIAG_OFF("overlength-strings")
