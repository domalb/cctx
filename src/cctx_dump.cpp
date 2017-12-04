#include "cctx.h"

//######################################################################################################################
// Endianness
//######################################################################################################################
#if defined CCTX_LITTLE_ENDIAN
#		pragma message ("CCTX_LITTLE_ENDIAN defined")
#elif defined CCTX_BIG_ENDIAN
#		pragma message ("CCTX_BIG_ENDIAN defined")
#else
#		pragma message ("no endianness defined")
#endif

//######################################################################################################################
// Architectures
//######################################################################################################################
#if defined CCTX_ARCH_X86
#		pragma message ("CCTX_ARCH_X86 defined")
#elif defined CCTX_ARCH_PPC
#		pragma message ("CCTX_ARCH_PPC defined")
#elif defined CCTX_ARCH_ARM
#		pragma message ("CCTX_ARCH_ARM defined")
#else
#		pragma message ("no architecture defined")
#endif

//######################################################################################################################
// Platforms
//######################################################################################################################
#if defined CCTX_PLATFORM_DOS
#		pragma message ("CCTX_PLATFORM_DOS defined")
#elif defined CCTX_PLATFORM_WINDOWS
#		pragma message ("CCTX_PLATFORM_WINDOWS defined")
#elif defined CCTX_PLATFORM_MAC
#		pragma message ("CCTX_PLATFORM_MAC defined")
#elif defined CCTX_PLATFORM_LINUX
#		pragma message ("CCTX_PLATFORM_LINUX defined")
#elif defined CCTX_PLATFORM_X360
#		pragma message ("CCTX_PLATFORM_X360 defined")
#elif defined CCTX_PLATFORM_XONE
#		pragma message ("CCTX_PLATFORM_XONE defined")
#elif defined CCTX_PLATFORM_PS3
#		pragma message ("CCTX_PLATFORM_PS3 defined")
#elif defined CCTX_PLATFORM_PS4
#		pragma message ("CCTX_PLATFORM_PS4 defined")
#elif defined CCTX_PLATFORM_SWITCH
#		pragma message ("CCTX_PLATFORM_SWITCH defined")
#elif defined CCTX_PLATFORM_ANDROID
#		pragma message ("CCTX_PLATFORM_ANDROID defined")
#elif defined CCTX_PLATFORM_IOS_SIMULATOR
#		pragma message ("CCTX_PLATFORM_IOS defined")
#elif defined CCTX_PLATFORM_IOS_DEVICE
#		pragma message ("CCTX_PLATFORM_IOS defined")
#elif defined CCTX_PLATFORM_DS
#		pragma message ("CCTX_PLATFORM_DS defined")
#else
#		pragma message ("no architecture defined")
#endif
