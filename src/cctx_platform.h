#ifndef _CCTX_PLATFORM_H
#define _CCTX_PLATFORM_H
#pragma once

// Platforms
//	CCTX_PLATFORM_DOS
//	CCTX_PLATFORM_WINDOWS
//	CCTX_PLATFORM_MAC
//	CCTX_PLATFORM_LINUX
//	CCTX_PLATFORM_X360
//	CCTX_PLATFORM_XONE
//	CCTX_PLATFORM_DS
//	CCTX_PLATFORM_GAMECUBE
//	CCTX_PLATFORM_WII
//	CCTX_PLATFORM_PSP
//	CCTX_PLATFORM_PS2
//	CCTX_PLATFORM_PS3
//	CCTX_PLATFORM_PS4
//	CCTX_PLATFORM_SWITCH
//	CCTX_PLATFORM_ANDROID
//	CCTX_PLATFORM_IOS
//		CCTX_PLATFORM_IOS_SIMULATOR
//		CCTX_PLATFORM_IOS_DEVICE


#if (defined _DURANGO)
#	define CCTX_PLATFORM_XONE
#elif ((defined _XENON) || (defined _XBOX))
#	define CCTX_PLATFORM_X360
#elif (defined _WIN32)
#	define CCTX_PLATFORM_WINDOWS
#elif (defined __DOS__)
#	define CCTX_PLATFORM_DOS
#elif (defined __ANDROID__)
#	define CCTX_PLATFORM_ANDROID
#elif ((defined __gnu_linux__) || (defined __linux))
#	define CCTX_PLATFORM_LINUX
#elif ((defined __DS__) || (defined ARM9))
#	define CCTX_PLATFORM_DS
#elif ((defined GEKKO) ||(defined __PPCGECKO__)
#	define CCTX_PLATFORM_GAMECUBE
#elif (defined __PPCBROADWAY__)
#	define CCTX_PLATFORM_WII
#elif ((defined __mips__) || (defined __MIPS__))
#	if (defined __psp__) || (defined R3000) || (defined __R4000__))
#		define CCTX_PLATFORM_PSP
#	else
#		define CCTX_PLATFORM_PS2
#	endif
#elif (defined __CELLOS_LV2__)
#	define CCTX_PLATFORM_PS3
#	if (defined __PPU__)
#		define CCTX_PLATFORM_PS3_PPU
#	elif (defined __SPU__)
#		define CCTX_PLATFORM_PS3_SPU
#	endif
#elif (defined __ORBIS__)
#	define CCTX_PLATFORM_PS4
#elif (defined __APPLE_CC__)
#	ifndef __TARGETCONDITIONALS__
#		error TargetConditionals.h should be included
#	endif
#	if TARGET_OS_IPHONE
#		define CCTX_PLATFORM_IOS
#		if TARGET_IPHONE_SIMULATOR
#			define CCTX_PLATFORM_IOS_SIMULATOR
#		elif TARGET_PLATFORM_IPHONE
#			define CCTX_PLATFORM_IOS_DEVICE
#		else
#			error unsupported iPhone platform
#		endif
#	elif TARGET_OS_MAC
#		define CCTX_PLATFORM_MAC
#	else
#		error unsupported Apple platform
#	endif
#else
#	error unsupported plateform
#endif

#endif // _CCTX_PLATFORM_H

