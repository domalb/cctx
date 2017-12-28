#include "cctx.h"

// Endianness
#if defined CCTX_ENDIAN_LITTLE
#	pragma message ("CCTX_ENDIAN_LITTLE defined")
#elif defined CCTX_ENDIAN_BIG
#	pragma message ("CCTX_ENDIAN_BIG defined")
#elif defined CCTX_ENDIAN_MIDDLE_LITTLE
#	pragma message ("CCTX_ENDIAN_MIDDLE_LITTLE defined")
#elif defined CCTX_ENDIAN_MIDDLE_BIG
#	pragma message ("CCTX_ENDIAN_MIDDLE_BIG defined")
#else
#	pragma message ("CCTX : no endianness defined")
#endif

// Pointer size
#if defined CCTX_ARCH_PTR_SIZE_2
#	pragma message ("CCTX_ARCH_PTR_SIZE_2 defined")
#elif defined CCTX_ARCH_PTR_SIZE_4
#	pragma message ("CCTX_ARCH_PTR_SIZE_4 defined")
#elif defined CCTX_ARCH_PTR_SIZE_8
#	pragma message ("CCTX_ARCH_PTR_SIZE_8 defined")
#else
#	pragma message ("CCTX : no pointer size defined")
#endif

// Architecture
#if defined CCTX_ARCH_X86
#	pragma message ("CCTX_ARCH_X86 defined")
#elif defined CCTX_ARCH_IA64
#	pragma message ("CCTX_ARCH_IA64 defined")
#elif defined CCTX_ARCH_68K
#	pragma message ("CCTX_ARCH_68K defined")
#elif defined CCTX_ARCH_PPC
#	pragma message ("CCTX_ARCH_PPC defined")
#elif defined CCTX_ARCH_CELL_PPU
#	pragma message ("CCTX_ARCH_CELL_PPU defined")
#elif defined CCTX_ARCH_CELL_SPU
#	pragma message ("CCTX_ARCH_CELL_SPU defined")
#elif defined CCTX_ARCH_ARM
#	pragma message ("CCTX_ARCH_ARM defined")
#elif defined CCTX_ARCH_MIPS
#	pragma message ("CCTX_ARCH_MIPS defined")
#elif defined CCTX_ARCH_ALPHA
#	pragma message ("CCTX_ARCH_ALPHA defined")
#elif defined CCTX_ARCH_SPARC
#	pragma message ("CCTX_ARCH_SPARC defined")
#elif defined CCTX_ARCH_BLACKFIN
#	pragma message ("CCTX_ARCH_BLACKFIN defined")
#elif defined CCTX_ARCH_SYSTEM370
#	pragma message ("CCTX_ARCH_SYSTEM370 defined")
#elif defined CCTX_ARCH_SYSTEMZ
#	pragma message ("CCTX_ARCH_SYSTEMZ defined")
#else
#	pragma message ("CCTX : no architecture defined")
#endif

// Platform
#if defined CCTX_PLATFORM_DOS
#	pragma message ("CCTX_PLATFORM_DOS defined")
#elif defined CCTX_PLATFORM_WINDOWS
#	pragma message ("CCTX_PLATFORM_WINDOWS defined")
#elif defined CCTX_PLATFORM_MAC
#	pragma message ("CCTX_PLATFORM_MAC defined")
#elif defined CCTX_PLATFORM_LINUX
#	pragma message ("CCTX_PLATFORM_LINUX defined")
#elif defined CCTX_PLATFORM_MINGW
#	pragma message ("CCTX_PLATFORM_MINGW defined")
#elif defined CCTX_PLATFORM_UNIX
#	pragma message ("CCTX_PLATFORM_UNIX defined")
#	if defined CCTX_PLATFORM_SOLARIS
#		pragma message ("CCTX_PLATFORM_SOLARIS defined")
#	elif defined CCTX_PLATFORM_SUNOS
#		pragma message ("CCTX_PLATFORM_SUNOS defined")
#	elif defined CCTX_PLATFORM_HPUX
#		pragma message ("CCTX_PLATFORM_HPUX defined")
#	elif defined CCTX_PLATFORM_BSD
#		pragma message ("CCTX_PLATFORM_BSD defined")
#	elif defined CCTX_PLATFORM_AIX
#		pragma message ("CCTX_PLATFORM_AIX defined")
#	elif defined CCTX_PLATFORM_CYGWIN
#		pragma message ("CCTX_PLATFORM_CYGWIN defined")
#else
#		pragma message ("CCTX : no Unix flavor defined")
#endif
#elif defined CCTX_PLATFORM_X360
#		pragma message ("CCTX_PLATFORM_X360 defined")
#elif defined CCTX_PLATFORM_XONE
#		pragma message ("CCTX_PLATFORM_XONE defined")
#elif defined CCTX_PLATFORM_DS
#		pragma message ("CCTX_PLATFORM_DS defined")
#elif defined CCTX_PLATFORM_GAMECUBE
#		pragma message ("CCTX_PLATFORM_GAMECUBE defined")
#elif defined CCTX_PLATFORM_WII
#		pragma message ("CCTX_PLATFORM_WII defined")
#elif defined CCTX_PLATFORM_PSP
#		pragma message ("CCTX_PLATFORM_PSP defined")
#elif defined CCTX_PLATFORM_PS2
#		pragma message ("CCTX_PLATFORM_PS2 defined")
#elif defined CCTX_PLATFORM_PS3
#		pragma message ("CCTX_PLATFORM_PS3 defined")
#elif defined CCTX_PLATFORM_PS4
#		pragma message ("CCTX_PLATFORM_PS4 defined")
#elif defined CCTX_PLATFORM_SWITCH
#		pragma message ("CCTX_PLATFORM_SWITCH defined")
#elif defined CCTX_PLATFORM_ANDROID
#		pragma message ("CCTX_PLATFORM_ANDROID defined")
#elif defined CCTX_PLATFORM_IOS
#		pragma message ("CCTX_PLATFORM_IOS defined")
#	if defined CCTX_PLATFORM_IOS_SIMULATOR
#		pragma message ("CCTX_PLATFORM_IOS_SIMULATOR defined")
#	elif defined CCTX_PLATFORM_IOS_DEVICE
#		pragma message ("CCTX_PLATFORM_IOS_DEVICE defined")
#	endif
#elif defined CCTX_PLATFORM_BEOS
#		pragma message ("CCTX_PLATFORM_BEOS defined")
#elif defined CCTX_PLATFORM_AMIGAOS
#		pragma message ("CCTX_PLATFORM_AMIGAOS defined")
#else
#		pragma message ("CCTX : no platform defined")
#endif

// Compiler
#if defined CCTX_COMPILER_CLANG
#	pragma message ("CCTX_COMPILER_CLANG defined")
#elif defined CCTX_COMPILER_GCC
#	pragma message ("CCTX_COMPILER_GCC defined")
#elif defined CCTX_COMPILER_MSVC
#	pragma message ("CCTX_COMPILER_MSVC defined")
#elif defined CCTX_COMPILER_BTC
#	pragma message ("CCTX_COMPILER_BTC defined")
#elif defined CCTX_COMPILER_BCPP
#	pragma message ("CCTX_COMPILER_BCPP defined")
#elif defined CCTX_COMPILER_SNC
#	pragma message ("CCTX_COMPILER_SNC defined")
#elif defined CCTX_COMPILER_MWC
#	pragma message ("CCTX_COMPILER_MWC defined")
#elif defined CCTX_COMPILER_CVC
#	pragma message ("CCTX_COMPILER_CVC defined")
#elif defined CCTX_COMPILER_CYGWIN
#	pragma message ("CCTX_COMPILER_CYGWIN defined")
#elif defined CCTX_COMPILER_COMO
#	pragma message ("CCTX_COMPILER_COMO defined")
#elif defined CCTX_COMPILER_ICL
#	pragma message ("CCTX_COMPILER_ICL defined")
#elif defined CCTX_COMPILER_DMC
#	pragma message ("CCTX_COMPILER_DMC defined")
#elif defined CCTX_COMPILER_DECC
#	pragma message ("CCTX_COMPILER_DECC defined")
#elif defined CCTX_COMPILER_DECCPP
#	pragma message ("CCTX_COMPILER_DECCPP defined")
#elif defined CCTX_COMPILER_COV
#	pragma message ("CCTX_COMPILER_COV defined")
#elif defined CCTX_COMPILER_DIAB
#	pragma message ("CCTX_COMPILER_DIAB defined")
#elif defined CCTX_COMPILER_IMGC
#	pragma message ("CCTX_COMPILER_IMGC defined")
#elif defined CCTX_COMPILER_CARM
#	pragma message ("CCTX_COMPILER_CARM defined")
#elif defined CCTX_COMPILER_C166
#	pragma message ("CCTX_COMPILER_C166 defined")
#elif defined CCTX_COMPILER_C51
#	pragma message ("CCTX_COMPILER_C51 defined")
#elif defined CCTX_COMPILER_LLVM
#	pragma message ("CCTX_COMPILER_LLVM defined")
#elif defined CCTX_COMPILER_HIGHC
#	pragma message ("CCTX_COMPILER_HIGHC defined")
#elif defined CCTX_COMPILER_MRI
#	pragma message ("CCTX_COMPILER_MRI defined")
#elif defined CCTX_COMPILER_MINGW32
#	pragma message ("CCTX_COMPILER_MINGW32 defined")
#elif defined CCTX_COMPILER_MINGW64
#	pragma message ("CCTX_COMPILER_MINGW64 defined")
#elif defined CCTX_COMPILER_SPC
#	pragma message ("CCTX_COMPILER_SPC defined")
#elif defined CCTX_COMPILER_SPCPP
#	pragma message ("CCTX_COMPILER_SPCPP defined")
#elif defined CCTX_COMPILER_IBMC
#	pragma message ("CCTX_COMPILER_IBMC defined")
#elif defined CCTX_COMPILER_IBMCPP
#	pragma message ("CCTX_COMPILER_IBMCPP defined")
#elif defined CCTX_COMPILER_PGI
#	pragma message ("CCTX_COMPILER_PGI defined")
#elif defined CCTX_COMPILER_HPC
#	pragma message ("CCTX_COMPILER_HPC defined")
#elif defined CCTX_COMPILER_HPCPP
#	pragma message ("CCTX_COMPILER_HPCPP defined")
#elif defined CCTX_COMPILER_CRAYC
#	pragma message ("CCTX_COMPILER_CRAYC defined")
#elif defined CCTX_COMPILER_KCC
#	pragma message ("CCTX_COMPILER_KCC defined")
#elif defined CCTX_COMPILER_NC
#	pragma message ("CCTX_COMPILER_NC defined")
#elif defined CCTX_COMPILER_TC
#	pragma message ("CCTX_COMPILER_TC defined")
#elif defined CCTX_COMPILER_USLC
#	pragma message ("CCTX_COMPILER_USLC defined")
#elif defined CCTX_COMPILER_WC
#	pragma message ("CCTX_COMPILER_WC defined")
#elif defined CCTX_COMPILER_SASC
#	pragma message ("CCTX_COMPILER_SASC defined")
#else
#	pragma message ("CCTX : no compiler defined")
#endif

// Language
#if defined CCTX_LANGUAGE_ASM
#		pragma message ("CCTX_LANGUAGE_ASM defined")
#elif defined CCTX_LANGUAGE_C
#		pragma message ("CCTX_LANGUAGE_C defined")
#elif defined CCTX_LANGUAGE_CPP
#		pragma message ("CCTX_LANGUAGE_CPP defined")
#elif defined CCTX_LANGUAGE_CPPCLI
#		pragma message ("CCTX_LANGUAGE_CPPCLI defined")
#elif defined CCTX_LANGUAGE_CPPCX
#		pragma message ("CCTX_LANGUAGE_CPPCX defined")
#elif defined CCTX_LANGUAGE_OBJC
#		pragma message ("CCTX_LANGUAGE_OBJC defined")
#else
#		pragma message ("CCTX : no language defined")
#endif

// Features
#ifdef CCTX_FEATURES_CPP_EXCEPTIONS
#   pragma message ("CCTX_FEATURES_CPP_EXCEPTIONS defined")
#else
#   pragma message ("CCTX_FEATURES_CPP_EXCEPTIONS not defined")
#endif
#ifdef CCTX_FEATURES_CPP_RTTI
#   pragma message ("CCTX_FEATURES_CPP_RTTI defined")
#else
#   pragma message ("CCTX_FEATURES_CPP_RTTI not defined")
#endif
#ifdef CCTX_FEATURES_CPP_RVALUE_REF
#   pragma message ("CCTX_FEATURES_CPP_RVALUE_REF defined")
#else
#   pragma message ("CCTX_FEATURES_CPP_RVALUE_REF not defined")
#endif
#ifdef CCTX_FEATURES_CPP_CONST_EXP
#   pragma message ("CCTX_FEATURES_CPP_CONST_EXP defined")
#else
#   pragma message ("CCTX_FEATURES_CPP_CONST_EXP not defined")
#endif

