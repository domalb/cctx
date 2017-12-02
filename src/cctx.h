#ifndef _CCTX_H
#define _CCTX_H
#pragma once

#if defined _DURANGO
#	define CCTX_PLATFORM_XONE
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_PTR_SIZE 8
#elif defined _XBOX
#	define CCTX_PLATFORM_X360
#	define CCTX_BIG_ENDIAN
#	define CCTX_PTR_SIZE 4
#elif defined WIN32
#	define CCTX_PLATFORM_WINDOWS
#	define CCTX_LITTLE_ENDIAN
#	ifdef _WIN64
#		define CCTX_PLATFORM_WINDOWS_X64
#		define CCTX_PTR_SIZE 8
#	else //_WIN64
#		define CCTX_PLATFORM_WINDOWS_X86
#		define CCTX_PTR_SIZE 4
#	endif // _WIN64
#elif defined __DOS__
#	define CCTX_PLATFORM_DOS
#	define CCTX_LITTLE_ENDIAN
#elif defined __ANDROID__
#	define CCTX_PLATFORM_ANDROID
#	define CCTX_LITTLE_ENDIAN
#	ifdef __ARM_ARCH
#		define CCTX_PLATFORM_ANDROID_ARM
#		if defined __ARM_ARCH_7A__
#			define CCTX_PLATFORM_ANDROID_ARM7A
#			define CCTX_PTR_SIZE 4
#		elif defined __ARM_ARCH_7S__
#			define CCTX_PLATFORM_ANDROID_ARM7S
#			define CCTX_PTR_SIZE 4
#		elif defined __ARM_ARCH_ISA_A64
#			define CCTX_PLATFORM_ANDROID_ARMA64
#			define CCTX_PTR_SIZE 8
#		else // __ARM_ARCH_XXX
#			error unsupported Android ARM platform
#		endif // __ARM_ARCH_XXX
#	elif defined __i386__ // or __i386 or i386
#		define CCTX_PLATFORM_ANDROID_INTEL
#		define CCTX_PLATFORM_ANDROID_X86
#		define CCTX_PTR_SIZE 4
#	elif defined __amd64__ // or __amd64
#		define CCTX_PLATFORM_ANDROID_INTEL
#		define CCTX_PLATFORM_ANDROID_X64
#		define CCTX_PTR_SIZE 8
#	else // Android architecture
#		error unsupported Android architecture
#	endif // Android architecture
#elif defined __gnu_linux__ // or __linux
	// Warning Android is considered to be Linux, so Android test must be kept higher
#	define CCTX_PLATFORM_LINUX
#	define CCTX_LITTLE_ENDIAN
#	ifdef __LP64__
#		define CCTX_PLATFORM_LINUX_X64
#		define CCTX_PTR_SIZE 8
#	else // __LP64__
#		define CCTX_PLATFORM_LINUX_X32
#		define CCTX_PTR_SIZE 4
#	endif // __LP64__
#elif defined ARM9
#	define CCTX_PLATFORM_DS
#	define CCTX_PTR_SIZE 4
#elif defined SN_TARGET_PS3
#	define CCTX_PLATFORM_PS3
#	define CCTX_PLATFORM_PS3_PPU
#	define CCTX_BIG_ENDIAN
#	define CCTX_PTR_SIZE 4
#elif defined SN_TARGET_PS3_SPU
#	define CCTX_PLATFORM_PS3
#	define CCTX_PLATFORM_PS3_SPU
#	define CCTX_BIG_ENDIAN
#	define CCTX_PTR_SIZE 4
#elif defined __ORBIS__
#	define CCTX_PLATFORM_PS4
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_PTR_SIZE 8
#elif defined __APPLE_CC__
//#	define CCTX_APPLE
#	include <TargetConditionals.h>
#	if TARGET_RT_LITTLE_ENDIAN
#		define CCTX_LITTLE_ENDIAN
#	elif TARGET_RT_BIG_ENDIAN
#		define CCTX_BIG_ENDIAN
#	endif // TARGET_RT_LITTLE_ENDIAN
#	if TARGET_RT_64_BIT
#		define CCTX_PTR_SIZE 8
#	else // TARGET_RT_64_BIT
#		define CCTX_PTR_SIZE 4
#	endif // TARGET_RT_64_BIT
#	if TARGET_OS_IPHONE
#		define CCTX_IOS
#		define CCTX_IOS_HACK
#		if TARGET_IPHONE_SIMULATOR
#			define CCTX_IOS_SIMULATOR
#			if TARGET_CPU_X86
#				define CCTX_PLATFORM_IOS_SIMULATOR_X86
#			elif TARGET_CPU_X86_64
#				define CCTX_PLATFORM_IOS_SIMULATOR_X64
#			elif TARGET_CPU_PPC
#				define CCTX_PLATFORM_IOS_SIMULATOR_PPC32
#			elif TARGET_CPU_PPC64
#				define CCTX_PLATFORM_IOS_SIMULATOR_PPC64
#			else // TARGET_CPU
#				error unsupported IPhone simulator platform
#			endif // TARGET_CPU
#		elif TARGET_PLATFORM_IPHONE
#			define CCTX_PLATFORM_IOS_DEVICE
#			if defined __ARM_ARCH_7A__
#				define CCTX_PLATFORM_IOS_DEVICE_ARM7A
#			elif defined __ARM_ARCH_7S__
#				define CCTX_PLATFORM_IOS_DEVICE_ARM7S
#			elif defined __aarch64__
#				define CCTX_PLATFORM_IOS_DEVICE_ARM64
#			else // __ARM_ARCH_XXX
#				error unsupported IOS device platform
#			endif // __ARM_ARCH_XXX
#		endif // TARGET_IPHONE_SIMULATOR
#	elif TARGET_OS_MAC
#		define CCTX_PLATFORM_MAC
#		if TARGET_CPU_X86
#			define CCTX_PLATFORM_MAC_X86
#			define CCTX_PLATFORM_MAC_INTEL
#		elif TARGET_CPU_X86_64
#			define CCTX_PLATFORM_MAC_X64
#			define CCTX_PLATFORM_MAC_INTEL
#		elif TARGET_CPU_PPC
#			define CCTX_PLATFORM_MAC_PPC32
#			define CCTX_PLATFORM_MAC_PPC
#		elif TARGET_CPU_PPC64
#			define CCTX_PLATFORM_MAC_PPC64
#			define CCTX_PLATFORM_MAC_PPC
#		else // TARGET_CPU
#			error unsupported Mac platform
#		endif // TARGET_CPU
#	else // TARGET_OS
#		error unsupported Apple platform
#	endif // TARGET_OS
#else
#	error unsupported plateform
#endif

#if defined CCTX_PLATFORM_WINDOWS
#   define CCTX_PATH_MAX MAX_PATH
#else // CCTX_PLATFORM_XXX
#   define CCTX_PATH_MAX PATH_MAX
#endif // CCTX_PLATFORM_XXX

#endif // _CCTX_H

