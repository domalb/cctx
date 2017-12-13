#ifndef _CCTX_ENDIAN_H
#define _CCTX_ENDIAN_H
#pragma once

// Endianness
//	CCTX_ENDIAN_LITTLE
//	CCTX_ENDIAN_BIG
//	CCTX_ENDIAN_MIDDLE_LITTLE
//	CCTX_ENDIAN_MIDDLE_BIG

#if ((defined _M_I86) || (defined __386__) || (defined _M_IX86) || (defined __X86__) || (defined _X86_) || (defined __I86__) || (defined __i386__) || (defined __i386) || (defined __386) || (defined __IA32__) || (defined __INTEL__) || (defined __THW_INTEL__) || (defined _M_X64) || (defined _M_AMD64) || (defined __amd64) || (defined __amd64__) || (defined __x86_64) || (defined __x86_64__) || (defined _M_IA64) || (defined __BFIN__) || (defined __bfin))
#	define CCTX_ENDIAN_LITTLE
#elif ((defined __CELLOS_LV2__) || (defined __BFIN__) || (defined __bfin) || (defined __370__) || (defined __THW_370__) || (defined __zarch__) || (defined __SYSC_ZARCH__) || (defined __s390__) || (defined __s390x__))
#	define CCTX_ENDIAN_BIG
#elif (defined __BYTE_ORDER__)
#	if (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#		define CCTX_ENDIAN_LITTLE
#	elif (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#		define CCTX_ENDIAN_BIG
#	elif (__BYTE_ORDER__ == __ORDER_PDP_ENDIAN__)
#		define CCTX_ENDIAN_MIDDLE_LITTLE
#	endif
#elif (defined __BYTE_ORDER)
#	if (__BYTE_ORDER == __BIG_ENDIAN)
#		define CCTX_ENDIAN_LITTLE
#	elif (__BYTE_ORDER == __LITTLE_ENDIAN)
#		define CCTX_ENDIAN_BIG
#	elif (__BYTE_ORDER == __PDP_ENDIAN)
#		define CCTX_ENDIAN_PDP
#	endif
#else
#	if ((defined __LITTLE_ENDIAN__) || (defined __ARMEL__) || (defined __THUMBEL__) || (defined __AARCH64EL__) || (defined __MIPSEL__) || (defined __MIPSEL) || (defined _MIPSEL))
#		define CCTX_ENDIAN_LITTLE
#	elif ((defined __BIG_ENDIAN__) || (defined __ARMEB__) || (defined __THUMBEB__) || (defined __AARCH64EB__) || (defined __MIPSEB__) || (defined __MIPSEB) || (defined _MIPSEB))
#		define CCTX_ENDIAN_BIG
#	endif
#endif

#endif // _CCTX_ENDIAN_H
