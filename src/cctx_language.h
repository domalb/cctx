#ifndef _CCTX_LANGUAGE_H
#define _CCTX_LANGUAGE_H
#pragma once

// Language currently compiled
//	CCTX_LANGUAGE_ASM GCC assembly language preprocessing
//	CCTX_LANGUAGE_C C
//	CCTX_LANGUAGE_CPP C++
//	CCTX_LANGUAGE_CPPCLI C++/CLI
//	CCTX_LANGUAGE_CPPCX C++/CX
//	CCTX_LANGUAGE_OBJC Objective-C

#if defined __ASSEMBLER__
#	define CCTX_LANGUAGE_ASM
#elif defined __OBJC__
#	define CCTX_LANGUAGE_OBJC
#elif defined __cplusplus_cli
#	define CCTX_LANGUAGE_CPPCLI
#elif defined __cplusplus_winrt
#	define CCTX_LANGUAGE_CPPCX
#elif defined __cplusplus
#	define CCTX_LANGUAGE_CPP
#else
#	define CCTX_LANGUAGE_C
#endif

#endif // _CCTX_LANGUAGE_H
