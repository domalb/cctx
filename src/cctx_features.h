#ifndef _CCTX_FEATURES_H
#define _CCTX_FEATURES_H
#pragma once

#include "cctx_utils.h"

// Features
//	CCTX_FEATURES_CPP_EXCEPTIONS
//	CCTX_FEATURES_CPP_RTTI
//	CCTX_FEATURES_CPP_RVALUE_REF
//	CCTX_FEATURES_CPP_CONST_EXP
//	CCTX_FEATURES_CPP_IF_CONST_EXP
//	CCTX_FEATURES_CPP_STATIC_ASSERT
//	CCTX_FEATURES_CPP_ALIGN_AS
//	CCTX_FEATURES_CPP_ALIGN_OF
//	CCTX_FEATURES_CPP_COUNTER

#if ((defined __cpp_exceptions) || (defined __EXCEPTIONS) || \
	 ((defined __clang__) && (__has_feature(cxx_exceptions))) || \
	 ((defined  _MSC_VER) && (defined _CPPUNWIND)))
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#endif

#if ((defined __cpp_rtti) || \
	 ((defined __clang__) && (__has_feature(cxx_rtti))) || \
	 ((defined  __GCC__) && (defined __GXX_RTTI)) || \
	 ((defined  _MSC_VER) && (defined _CPPRTTI)) || \
	 ((defined __IBMCPP__) && (!defined __NO_RTTI__)))
#	define CCTX_FEATURES_CPP_RTTI
#endif

#if ((defined __cpp_rvalue_references) || \
	 ((defined __clang__) && (__has_extension(cxx_rvalue_references))) || \
	 ((defined _MSC_VER) && (_MSC_VER >= 1600)))
#	define CCTX_FEATURES_CPP_RVALUE_REF
#endif

#if ((defined __cpp_constexpr) || \
	 ((defined __clang__) && (__has_feature(cxx_constexpr))))
#	define CCTX_FEATURES_CPP_CONST_EXP
#endif

#if (defined __cpp_if_constexpr)
#	define CCTX_FEATURES_CPP_IF_CONST_EXP
#endif

#if ((defined __cpp_static_assert))
#	define CCTX_FEATURES_CPP_STATIC_ASSERT
#endif

#if ((0) || \
	 ((defined __clang__) && (__has_feature(cxx_alignas))))
#	define CCTX_FEATURES_CPP_ALIGN_AS
#endif

#if ((0) || \
	 ((defined __clang__) && (__has_feature(cxx_alignof))) || \
	 ((defined _MSC_VER) && (__cplusplus > 201103L)))
#	define CCTX_FEATURES_CPP_ALIGN_OF
#elif ((defined _MSC_VER) && (_MSC_VER >= 1400))
#	define CCTX_FEATURES_CPP_ALIGN_OF
#	define alignof __alignof
#elif ((defined __GNUC__) && _CCTX_GCC_VERSION_MIN(4, 2, 1))
#	define CCTX_FEATURES_CPP_ALIGN_OF
#	define alignof __alignof__
#endif

#if (((defined __clang__) && (__cplusplus > 201103L)) || \
	 ((defined __GNUC__) && _CCTX_GCC_VERSION_MIN(4, 3, 0)) || \
	 ((defined _MSC_VER) && (_MSC_VER >= 1600)))
#	define O_COMPILER_SUPPORTS_STATIC_ASSERT
#endif

#endif // _CCTX_FEATURES_H
