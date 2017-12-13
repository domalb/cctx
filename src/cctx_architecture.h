#ifndef _CCTX_ARCHITECTURE_H
#define _CCTX_ARCHITECTURE_H
#pragma once

// Pointer size
//	CCTX_ARCH_PTR_SIZE_2
//	CCTX_ARCH_PTR_SIZE_4
//	CCTX_ARCH_PTR_SIZE_8

// Architectures
//	CCTX_ARCH_X86
//	CCTX_ARCH_IA64
//	CCTX_ARCH_68K
//	CCTX_ARCH_PPC
//	CCTX_ARCH_CELL_PPU
//	CCTX_ARCH_CELL_SPU
//	CCTX_ARCH_ARM
//	CCTX_ARCH_MIPS
//	CCTX_ARCH_ALPHA
//	CCTX_ARCH_SPARC
//	CCTX_ARCH_BLACKFIN
//	CCTX_ARCH_SYSTEM370
//	CCTX_ARCH_SYSTEMZ

#if ((defined _M_I86) || ((defined _M_IX86) && (!defined __386__)))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_PTR_SIZE_2
#elif ((defined _M_IX86) || (defined __X86__) || (defined _X86_) || (defined __I86__) || (defined __i386__) || (defined __i386) || (defined __386) || (defined __IA32__) || (defined __INTEL__) || (defined __THW_INTEL__))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_PTR_SIZE_4
#elif ((defined _M_X64) || (defined _M_AMD64) || (defined __amd64) || (defined __amd64__) || (defined __x86_64) || (defined __x86_64__))
#	define CCTX_ARCH_X86
#	define CCTX_ARCH_PTR_SIZE_8
#elif ((defined _M_IA64) || (defined _IA64) || (defined __ia64__) || (defined __ia64) || (defined __itanium__))
#	define CCTX_ARCH_IA64
#	define CCTX_ARCH_PTR_SIZE_8
#elif ((defined __m68k__) || (defined __MC68K__) || (defined M68000))
#	define CCTX_ARCH_68K
#	define CCTX_ARCH_PTR_SIZE_4
#elif ((defined _M_MRX000) || (defined __MIPS__) || (defined _MIPS_) || (defined __mips__) || (defined mips))
#	define CCTX_ARCH_MIPS
	// Endianness to be defined according to the processor
#elif ((defined __powerpc64__) || (defined __PPC64__) || (defined __ppc64__) || (defined _ARCH_PPC64))
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_PTR_SIZE_8
#elif ((defined _M_PPC) || (defined _M_PPCBE) || (defined _PPC_) || (defined __POWERPC__) || (defined __powerpc__) || (defined __powerpc) || (defined _ARCH_PPC) || (defined __ppc) || (defined __PPCGECKO__))
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_PTR_SIZE_4
#elif (defined __CELLOS_LV2__)
#	define CCTX_ARCH_PTR_SIZE_4
#	if (defined __PPU__)
#		define CCTX_ARCH_CELL_PPU
#	elif (defined __SPU__)
#		define CCTX_ARCH_CELL_SPU
#	endif
#elif ((defined _M_ARM) || (defined __arm__) || (defined _ARM) || (defined __arm) || (defined __ARM_ARCH) || (defined __TARGET_ARCH_ARM))
#	define CCTX_ARCH_ARM
#	define CCTX_ARCH_ENDIAN_LITTLE
#	if ((defined __ARM_ARCH_ISA_A64) || (defined __aarch64__))
#		define CCTX_ARCH_ARMA64
#		define CCTX_ARCH_PTR_SIZE_8
#	else
#		define CCTX_ARCH_PTR_SIZE_4
#		if defined __ARM_ARCH_2__
#			define CCTX_ARCH_ARM2
#		elif defined __ARM_ARCH_3__
#			define CCTX_ARCH_ARM3
#		elif defined __ARM_ARCH_3M__
#			define CCTX_ARCH_ARM3M
#		elif defined __ARM_ARCH_4__
#			define CCTX_ARCH_ARM4
#		elif defined __ARM_ARCH_7__
#			define CCTX_ARCH_ARM7A
#		elif defined __ARM_ARCH_7A__
#			define CCTX_ARCH_ARM7A
#		elif defined __ARM_ARCH_7R__
#			define CCTX_ARCH_ARM7R
#		elif defined __ARM_ARCH_7M__
#			define CCTX_ARCH_ARM7M
#		elif defined __ARM_ARCH_7EM__
#			define CCTX_ARCH_ARM7EM
#		elif defined __ARM_ARCH_7R__
#			define CCTX_ARCH_ARM7R
#		elif defined __ARM_ARCH_7S__
#			define CCTX_ARCH_ARM7S
#		elif defined __ARM_ARCH_8__
#			define CCTX_ARCH_ARM8
#		elif defined __ARM_ARCH_8A__
#			define CCTX_ARCH_ARM8A
#		endif
#	endif
#elif ((defined __alpha__) || (defined __alpha))
#	define CCTX_ARCH_ALPHA
#	define CCTX_ARCH_PTR_SIZE_8
#elif ((defined __BFIN__) || (defined __bfin))
#	define CCTX_ARCH_BLACKFIN
#	define CCTX_ARCH_PTR_SIZE_4
#elif ((defined __sparc__) || (defined __sparc))
#	define CCTX_ARCH_SPARC
#	if ((defined __sparc64__) || (defined __arch64__))
#		define CCTX_ARCH_PTR_SIZE_8
#	else
#		define CCTX_ARCH_PTR_SIZE_4
#	endif
#elif ((defined __370__) || (defined __THW_370__))
#	define CCTX_ARCH_SYSTEM370
#	define CCTX_ARCH_PTR_SIZE_4
#elif ((defined __zarch__) || (defined __SYSC_ZARCH__) || (defined __s390__) || (defined __s390x__))
#	define CCTX_ARCH_SYSTEMZ
// Endianness to be defined according to the processor
#	if (defined __s390x__)
#		define CCTX_ARCH_PTR_SIZE_8
#	elif (defined __s390__)
#		define CCTX_ARCH_PTR_SIZE_4
#	endif
#else
#	error unsupported architecture
#endif

#endif // _CCTX_ARCHITECTURE_H
