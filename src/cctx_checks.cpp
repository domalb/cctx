#include "cctx.h"

#if defined __APPLE_CC__
#	if TARGET_OS_IPHONE
#		if TARGET_IPHONE_SIMULATOR
#			if TARGET_CPU_X86
#				ifndef CCTX_ARCH_32
#					error CCTX_ARCH_32 should be defined
#				endif // CCTX_ARCH_32
#			elif TARGET_CPU_X86_64
#				ifndef CCTX_ARCH_64
#					error CCTX_ARCH_64 should be defined
#				endif // CCTX_ARCH_32
#			elif TARGET_CPU_PPC
#				ifndef CCTX_ARCH_32
#					error CCTX_ARCH_32 should be defined
#				endif // CCTX_ARCH_32
#			elif TARGET_CPU_PPC64
#				ifndef CCTX_ARCH_64
#					error CCTX_ARCH_64 should be defined
#				endif // CCTX_ARCH_32
#			else // TARGET_CPU
#				error unsupported IPhone simulator platform
#			endif // TARGET_CPU
#		endif // TARGET_IPHONE_SIMULATOR
#	elif TARGET_OS_MAC
#		define CCTX_PLATFORM_MAC
#		if TARGET_CPU_X86
#				ifndef CCTX_ARCH_32
#					error CCTX_ARCH_32 should be defined
#				endif // CCTX_ARCH_32
#		elif TARGET_CPU_X86_64
#				ifndef CCTX_ARCH_64
#					error CCTX_ARCH_64 should be defined
#				endif // CCTX_ARCH_32
#		elif TARGET_CPU_PPC
#				ifndef CCTX_ARCH_32
#					error CCTX_ARCH_32 should be defined
#				endif // CCTX_ARCH_32
#		elif TARGET_CPU_PPC64
#				ifndef CCTX_ARCH_64
#					error CCTX_ARCH_64 should be defined
#				endif // CCTX_ARCH_32
#		else // TARGET_CPU
#			error unsupported Mac platform
#		endif // TARGET_CPU
#	else // TARGET_OS
#		error unsupported Apple platform
#	endif // TARGET_OS
#endif // __APPLE_CC__
