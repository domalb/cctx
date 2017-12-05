#ifndef _CCTX_COMPILER_H
#define _CCTX_COMPILER_H
#pragma once

// Compiler
//	CCTX_COMPILER_CLANG
//	CCTX_COMPILER_GCC
//	CCTX_COMPILER_MSVC
//	CCTX_COMPILER_BCPP
//	CCTX_COMPILER_SNC
//	CCTX_COMPILER_MWC
//	CCTX_COMPILER_CVC
//	CCTX_COMPILER_COMO
//	CCTX_COMPILER_ICL
//	CCTX_COMPILER_DMC
//	CCTX_COMPILER_DECC
//	CCTX_COMPILER_COV
//	CCTX_COMPILER_DIAB

// source : https://sourceforge.net/p/predef/wiki/Compilers/

#if (defined __clang__)
#	define CCTX_COMPILER_CLANG // Clang
#elif ((defined __GNUC__) || (defined __GCC__))
#	define CCTX_COMPILER_GCC // GCC
#elif (defined _MSC_VER)
#	define CCTX_COMPILER_MSVC // Microsoft Visual C++
#elif (defined __BCPLUSPLUS__)
#	define CCTX_COMPILER_BCPP // Borland C++
#elif (defined __SNC__)
#	define CCTX_COMPILER_SNC // SN
#elif ((defined __MWERKS__) || (defined __CWCC__))
#	define CCTX_COMPILER_MWC // Metrowerks CodeWarrior
#elif (defined __VECTOR_C)
#	define CCTX_COMPILER_CVC // Codeplay VectorC
#elif (defined __COMO__)
#	define CCTX_COMPILER_COMO // Intel Comeau C++
#elif ((defined __INTEL_COMPILER) || (defined __ICL))
#	define CCTX_COMPILER_ICL // Intel
#elif (defined __DMC__)
#	define CCTX_COMPILER_DMC // Digital Mars
#elif (defined __DECC)
#	define CCTX_COMPILER_DECC // Compaq C/C++
#elif (defined __COVERITY__)
#	define CCTX_COMPILER_COV // Coverity C/C++ Static Analyzer
#elif (defined __DCC__)
#	define CCTX_COMPILER_DIAB // Diab C/C++
#elif (defined __IMAGECRAFT__)
#	define CCTX_COMPILER_DIAB // ImageCraft C
#elif (defined __CA__)
#	define CCTX_COMPILER_CARM // KEIL CARM
#elif (defined __C166__)
#	define CCTX_COMPILER_C166 // KEIL C166
#elif (defined __C51__)
#	define CCTX_COMPILER_C51 // KEIL C51
#elif (defined __llvm__)
#	define CCTX_COMPILER_LLVM // LLVM
#elif (defined __HIGHC__)
#	define CCTX_COMPILER_LLVM // MetaWare High C/C++
#elif (defined _MRI)
#	define CCTX_COMPILER_MRI // Microtec C/C++
#elif ((defined __MINGW32__) || (defined __MINGW64__))
#	define CCTX_COMPILER_MRI // MinGW
#else
#	error unsupported compiler
#endif

#endif // _CCTX_COMPILER_H
