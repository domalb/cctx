#ifndef _CCTX_ARCHITECTURE_H
#define _CCTX_ARCHITECTURE_H
#pragma once


// Endianness
//	CCTX_ARCH_LITTLE_ENDIAN
//	CCTX_ARCH_BIG_ENDIAN

// Architectures
//	CCTX_ARCH_X86
//		CCTX_ARCH_X86_16
//		CCTX_ARCH_X86_32
//		CCTX_ARCH_X86_64
//	CCTX_ARCH_IA64
//	CCTX_ARCH_68K
//	CCTX_ARCH_PPC
//		CCTX_ARCH_PPC_32
//		CCTX_ARCH_PPC_64
//	CCTX_ARCH_ARM
//	CCTX_ARCH_MIPS

#if ((defined _M_I86) || ((defined _M_IX86) && (!defined __386__)))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_X86_16
#	define CCTX_ARCH_LITTLE_ENDIAN
#elif ((defined _M_IX86) || (defined __X86__) || (defined _X86_) || (defined __I86__) || (defined __i386__) || (defined __i386) || (defined __386) || (defined __IA32__) || (defined __INTEL__) || (defined __THW_INTEL__))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_X86_32
#	define CCTX_ARCH_LITTLE_ENDIAN
#elif ((defined _M_X64) || (defined _M_AMD64) || (defined __amd64) || (defined __amd64__) || (defined __x86_64))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_X86_64
#	define CCTX_ARCH_LITTLE_ENDIAN
#elif ((defined _M_IA64) || (defined _IA64) || (defined __ia64__) || (defined __ia64) || (defined __itanium__))
#	define CCTX_ARCH_IA64
#	define CCTX_ARCH_LITTLE_ENDIAN
#elif ((defined __m68k__) || (defined __MC68K__) || (defined M68000))
#	define CCTX_ARCH_68K
#	define CCTX_ARCH_BIG_ENDIAN
#elif ((defined(_M_MRX000) || defined( __MIPS__ ) || (defined( __mips__ ))
#	define CCTX_ARCH_MIPS
#	define CCTX_ARCH_LITTLE_ENDIAN
#elif ((defined __powerpc64__) || (defined __PPC64__) || (defined __ppc64__) || (defined _ARCH_PPC64))
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_PPC_64
#	define CCTX_ARCH_BIG_ENDIAN
#elif ((defined _M_PPC) || (defined _M_PPCBE) || (defined _PPC_) || (defined __POWERPC__) || (defined __powerpc__) || (defined _ARCH_PPC) || (defined __ppc) || (defined __PPCGECKO__))
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_PPC_32
#	define CCTX_ARCH_BIG_ENDIAN
#elif (defined __CELLOS_LV2__)
#	define CCTX_ARCH_BIG_ENDIAN
#	if (defined __PPU__)
#		define CCTX_ARCH_CELL_PPU
#	elif (defined __SPU__)
#		define CCTX_ARCH_CELL_SPU
#	endif
#elif ((defined _M_ARM) || (defined __arm__) || (defined _ARM) || (defined __arm) || (defined __ARM_ARCH) || (defined __TARGET_ARCH_ARM))
#	define CCTX_ARCH_ARM
#	define CCTX_ARCH_LITTLE_ENDIAN
#	if defined __ARM_ARCH_2__
#		define CCTX_ARCH_ARM2
#	elif defined __ARM_ARCH_3__
#		define CCTX_ARCH_ARM3
#	elif defined __ARM_ARCH_3M__
#		define CCTX_ARCH_ARM3M
#	elif defined __ARM_ARCH_4__
#		define CCTX_ARCH_ARM4
#	elif defined __ARM_ARCH_7__
#		define CCTX_ARCH_ARM7A
#	elif defined __ARM_ARCH_7A__
#		define CCTX_ARCH_ARM7A
#	elif defined __ARM_ARCH_7R__
#		define CCTX_ARCH_ARM7R
#	elif defined __ARM_ARCH_7M__
#		define CCTX_ARCH_ARM7M
#	elif defined __ARM_ARCH_7EM__
#		define CCTX_ARCH_ARM7EM
#	elif defined __ARM_ARCH_7S__
#		define CCTX_ARCH_ARM7S
#	elif defined __ARM_ARCH_7S__
#		define CCTX_ARCH_ARM7S
#	elif ((defined __ARM_ARCH_ISA_A64) || (defined __aarch64__))
#		define CCTX_ARCH_ARMA64
#else
#	error unsupported architecture
#endif

#endif // _CCTX_ARCHITECTURE_H
