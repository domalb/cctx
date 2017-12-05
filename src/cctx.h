#ifndef _CCTX_H
#define _CCTX_H
#pragma once

// Endianness
//	CCTX_LITTLE_ENDIAN
//	CCTX_BIG_ENDIAN

// Architectures
//	CCTX_ARCH_X86
//	CCTX_ARCH_PPC
//	CCTX_ARCH_ARM
//	CCTX_ARCH_MIPS

// Platforms
//	CCTX_PLATFORM_DOS
//	CCTX_PLATFORM_WINDOWS
//	CCTX_PLATFORM_MAC
//	CCTX_PLATFORM_LINUX
//	CCTX_PLATFORM_X360
//	CCTX_PLATFORM_XONE
//	CCTX_PLATFORM_PSP
//	CCTX_PLATFORM_PS2
//	CCTX_PLATFORM_PS3
//	CCTX_PLATFORM_PS4
//	CCTX_PLATFORM_SWITCH
//	CCTX_PLATFORM_ANDROID
//	CCTX_PLATFORM_IOS_SIMULATOR : CCTX_PLATFORM_IOS defined
//	CCTX_PLATFORM_IOS_DEVICE : CCTX_PLATFORM_IOS defined
//	CCTX_PLATFORM_DS


#if (defined _DURANGO)

#	define CCTX_PLATFORM_XONE
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_64
#	define CCTX_ARCH_X86

#elif (defined _XBOX)

#	define CCTX_PLATFORM_X360
#	define CCTX_BIG_ENDIAN
#	define CCTX_ARCH_32
#	define CCTX_ARCH_PPC

#elif (defined _WIN32)

#	define CCTX_PLATFORM_WINDOWS
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_X86
#	ifdef _WIN64
#		define CCTX_ARCH_64
#	else //_WIN64
#		define CCTX_ARCH_32
#	endif // _WIN64

#elif (defined __DOS__)

#	define CCTX_PLATFORM_DOS
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_X86

#elif (defined __ANDROID__)

#	define CCTX_PLATFORM_ANDROID
#	define CCTX_LITTLE_ENDIAN
#	ifdef __ARM_ARCH
#		define CCTX_ARCH_ARM
#		if defined __ARM_ARCH_7A__
#			define CCTX_ARCH_ARM7A
#			define CCTX_ARCH_32
#		elif defined __ARM_ARCH_7S__
#			define CCTX_ARCH_ARM7S
#			define CCTX_ARCH_32
#		elif defined __ARM_ARCH_ISA_A64
#			define CCTX_ARCH_ARMA64
#			define CCTX_ARCH_64
#		else // __ARM_ARCH_XXX
#			error unsupported Android ARM platform
#		endif // __ARM_ARCH_XXX
#	elif ((defined __i386__) || (defined __i386) || (defined i386))
#		define CCTX_ARCH_X86
#		define CCTX_ARCH_32
#	elif defined __amd64__ // or __amd64
#		define CCTX_ARCH_X86
#		define CCTX_ARCH_64
#	else // Android architecture
#		error unsupported Android architecture
#	endif // Android architecture

#elif ((defined __gnu_linux__) || (defined __linux))

	// Warning Android is considered to be Linux, so Android test must be kept higher
#	define CCTX_PLATFORM_LINUX
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_X86
#	ifdef __LP64__
#		define CCTX_ARCH_64
#	else // __LP64__
#		define CCTX_ARCH_32
#	endif // __LP64__

#elif ((defined __DS__) || (defined ARM9))

#	define CCTX_PLATFORM_DS
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_ARM
#	define CCTX_ARCH_32

#elif ((defined __mips__) || (defined __MIPS__))

#	if (defined __psp__) || (defined R3000) || (defined __R4000__))
#		define CCTX_PLATFORM_PSP
#		define CCTX_LITTLE_ENDIAN
#		define CCTX_ARCH_MIPS
#		define CCTX_ARCH_32
#	else
#		define CCTX_PLATFORM_PS2
#		define CCTX_LITTLE_ENDIAN
#		define CCTX_ARCH_MIPS
#		define CCTX_ARCH_32
#	endif

#elif (defined __CELLOS_LV2__)

#	define CCTX_PLATFORM_PS3
#	define CCTX_BIG_ENDIAN
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_32
#	if (defined __PPU__)
#		define CCTX_PLATFORM_PS3_PPU
#	elif (defined __SPU__)
#		define CCTX_PLATFORM_PS3_SPU
#	endif

#elif (defined __ORBIS__)

#	define CCTX_PLATFORM_PS4
#	define CCTX_LITTLE_ENDIAN
#	define CCTX_ARCH_PPC
#	define CCTX_ARCH_64

#elif (defined __APPLE_CC__)

#	ifndef __TARGETCONDITIONALS__
#		error TargetConditionals.h should be included
#	endif // __TARGETCONDITIONALS__
#	if TARGET_RT_LITTLE_ENDIAN
#		define CCTX_LITTLE_ENDIAN
#	elif TARGET_RT_BIG_ENDIAN
#		define CCTX_BIG_ENDIAN
#	endif // TARGET_RT_LITTLE_ENDIAN
#	if TARGET_RT_64_BIT
#		define CCTX_ARCH_64
#	else // TARGET_RT_64_BIT
#		define CCTX_ARCH_32
#	endif // TARGET_RT_64_BIT
#	if TARGET_OS_IPHONE
#		define CCTX_PLATFORM_IOS
#		if TARGET_IPHONE_SIMULATOR
#			define CCTX_PLATFORM_IOS_SIMULATOR
#			if TARGET_CPU_X86
#				define CCTX_ARCH_X86
#			elif TARGET_CPU_X86_64
#				define CCTX_ARCH_X86
#			elif TARGET_CPU_PPC
#				define CCTX_ARCH_PPC
#			elif TARGET_CPU_PPC64
#				define CCTX_ARCH_PPC
#			else // TARGET_CPU
#				error unsupported IPhone simulator platform
#			endif // TARGET_CPU
#		elif TARGET_PLATFORM_IPHONE
#			define CCTX_PLATFORM_IOS_DEVICE
#			if defined __ARM_ARCH_7A__
#				define CCTX_ARCH_ARM7A
#			elif defined __ARM_ARCH_7S__
#				define CCTX_ARCH_ARM7S
#			elif defined __aarch64__
#				define CCTX_ARCH_ARMA64
#			else // __ARM_ARCH_XXX
#				error unsupported IOS device platform
#			endif // __ARM_ARCH_XXX
#		endif // TARGET_IPHONE_SIMULATOR
#	elif TARGET_OS_MAC
#		define CCTX_PLATFORM_MAC
#		if TARGET_CPU_X86
#				define CCTX_ARCH_X86
#		elif TARGET_CPU_X86_64
#				define CCTX_ARCH_X86
#		elif TARGET_CPU_PPC
#				define CCTX_ARCH_PPC
#		elif TARGET_CPU_PPC64
#				define CCTX_ARCH_PPC
#		else // TARGET_CPU
#			error unsupported Mac platform
#		endif // TARGET_CPU
#	else // TARGET_OS
#		error unsupported Apple platform
#	endif // TARGET_OS

#else
#	error unsupported plateform
#endif

// #if defined CCTX_PLATFORM_WINDOWS
// #   define CCTX_PATH_MAX MAX_PATH
// #else // CCTX_PLATFORM_XXX
// #   define CCTX_PATH_MAX PATH_MAX
// #endif // CCTX_PLATFORM_XXX
// 
// #ifdef CCTX_ARCH_64
// #	define CCTX_PTR_SIZE 8
// #else // CCTX_ARCH_64
// #	define CCTX_PTR_SIZE 4
// #endif // CCTX_ARCH_64

#endif // _CCTX_H

