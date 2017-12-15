# C Context (CCTX)
Get basic knowledge of your C/C++ context : compiler, architecture, language, platform, features...

## Compiler
Include cctx_compiler.h and detect the compiler your code is compiled for
 * Clang https://clang.llvm.org/
 * GCC https://gcc.gnu.org/
 * Microsoft Visual C++ https://www.visualstudio.com/vs/cplusplus/
 * Borland Turbo C http://cc.embarcadero.com/item/25636
 * Borland C++ https://www.embarcadero.com/free-tools/ccompiler
 * SNC http://www.snsys.com/
 * Metrowerks CodeWarrior https://www.nxp.com/support/developer-resources/software-development-tools/codewarrior-development-tools:CW_HOME
 * Codeplay VectorC https://www.codeplay.com/company/documents/vectorc-compiler-engine.html
 * Cygwin http://www.cygwin.com/
 * Comeau C++ http://www.comeaucomputing.com/
 * Intel C++ https://software.intel.com/en-us/intel-sdp-home
 * Digital Mars http://www.digitalmars.com/
 * Compaq C/C++ http://www.cism.ucl.ac.be/Equipements/Logiciels/Manuels/Compaq/C++/ugu/u57.htm
 * Coverity C/C++ Static Analyzer https://scan.coverity.com/
 * Diab C/C++ https://www.windriver.com/products/development-tools/
 * ImageCraft C https://www.imagecraft.com/
 * KEIL CARM http://www.keil.com/arm/carm.asp
 * KEIL C166 http://www.keil.com/c166/
 * KEIL C51 http://www.keil.com/c51/
 * LLVM https://llvm.org/
 * MetaWare High C/C++
 * Microtec C/C++
 * MinGW http://www.mingw.org/
 * Solaris Studio C/C++ https://www.oracle.com/sun/index.html
 * IBM XL C/C++ http://www.ibm.com/software/ad/caix/
 * Portland Group PGI PGCC/PGPP
 * HP C/C++ http://devresource.hp.com/devresource/Tools/lang.html
 * Cray C/C++ http://www.cray.com/products/software/cplus.html
 * KAI C++ http://developer.intel.com/software/products/kcc/
 * Norcroft C http://www.codemist.co.uk/ncc/index.html
 * Tiny C https://bellard.org/tcc/
 * USL C https://bellard.org/tcc/
 * Watcom C++ http://openwatcom.com/
 * SAS/C https://www.sas.com
 
## Architecture
Include cctx_architecture.h and detect the architecture your code is compiled for
 * x86
 * Itanium 64
 * 68K
 * PowerPC
 * Cell PPU
 * Cell SPU
 * ARM https://www.arm.com/
 * MIPS https://www.mips.com/
 * APLPHA
 * SPARC
 * Blackfin http://www.analog.com/en/products/landing-pages/001/blackfin-architecture.html
 * System/370 http://www-03.ibm.com/ibm/history/exhibits/mainframe/mainframe_PR370.html
 * System/Z https://www.ibm.com/it-infrastructure/z

With information regarding to pointer size (2, 4 or 8)

## Endianness
Include cctx_endian.h and detect the endianness your code is compiled for
 * Little
 * Big
 * Middle-little
 * Middle-big

## Language
Include cctx_language.h and detect language currently compiled
 * Assembly (GCC preprocessing)
 * C
 * C++
 * C++/CLI
 * C++/CX
 * Objective-C

## Platform
Include cctx_platform.h and detect the platform (OS) your code is compiled for
 * DOS
 * Windows
 * MacOS
 * Linux
 * MinGW
 * Solaris
 * SunOS
 * HPUX
 * BSD Unix
 * AIX
 * QNX
 * Cygwin
 * BeOS
 * XBox360
 * XBoxOne
 * DS
 * GameCube
 * Wii
 * Switch
 * PSP
 * PS2
 * PS3
 * PS4
 * Android
 * iOS Simulator
 * iOS Device
 * Chrome Native Client
 * AmigaOS
 
 ## Features
