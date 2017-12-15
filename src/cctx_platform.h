#ifndef _CCTX_PLATFORM_H
#define _CCTX_PLATFORM_H
#pragma once

// Platforms
//	CCTX_PLATFORM_DOS
//	CCTX_PLATFORM_WINDOWS
//	CCTX_PLATFORM_MAC
//	CCTX_PLATFORM_LINUX
//	CCTX_PLATFORM_MINGW
//	CCTX_PLATFORM_UNIX
//		CCTX_PLATFORM_SOLARIS
//		CCTX_PLATFORM_SUNOS
//		CCTX_PLATFORM_HPUX
//		CCTX_PLATFORM_BSD
//		CCTX_PLATFORM_AIX
//		CCTX_PLATFORM_CYGWIN
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
//	CCTX_PLATFORM_NACL
//	CCTX_PLATFORM_BEOS
//	CCTX_PLATFORM_QNX
//	CCTX_PLATFORM_AMIGAOS


#if (defined _DURANGO)
#	define CCTX_PLATFORM_XONE
#elif ((defined _XENON) || (defined _XBOX))
#	define CCTX_PLATFORM_X360
#elif (defined _WIN32)
#	define CCTX_PLATFORM_WINDOWS
#elif ((defined __DOS__) || (defined __MSDOS__))
#	define CCTX_PLATFORM_DOS
#elif (defined __ANDROID__) // must be before Linux
#	define CCTX_PLATFORM_ANDROID
#elif ((defined __gnu_linux__) || (defined __linux))
#	define CCTX_PLATFORM_LINUX
#elif ((defined __MINGW32__) || (defined __MINGW64__)) // must be before Unix
#	define CCTX_PLATFORM_MINGW
#elif (defined __APPLE_CC__) // must be before Unix
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
#elif (defined __native_client__)
#	define CCTX_PLATFORM_NACL
#elif (defined __BEOS__)
#	define CCTX_PLATFORM_BEOS
#elif (defined __QNXNTO__)
#	define CCTX_PLATFORM_QNX
#elif ((defined __unix__) || (defined __unix))
#	define CCTX_PLATFORM_UNIX
#	if (((defined __sun__) || (defined __sun) || (defined sun)) && ((defined __svr4__) || (defined __SVR4)))
#		define CCTX_PLATFORM_SOLARIS
#	elif ((defined __sun__) || (defined __sun) || (defined __SunOS))
#		define CCTX_PLATFORM_SUNOS
#	elif ((defined __DragonFly__) || (defined __FreeBSD__) || (defined __NetBSD__) || (defined __OpenBSD__) || (defined __bsdi__))
#		define CCTX_PLATFORM_BSD
#	elif (defined __hpux)
#		define CCTX_PLATFORM_HPUX
#	elif (defined _AIX)
#		define CCTX_PLATFORM_AIX
#	elif (defined __CYGWIN__)
#		define CCTX_PLATFORM_CYGWIN
#	endif
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
#elif (defined __amigaos__)
#	define CCTX_PLATFORM_AMIGAOS
#else
#	error unsupported plateform
#endif

#endif // _CCTX_PLATFORM_H

