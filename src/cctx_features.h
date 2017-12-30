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

// Exceptions
#if ((defined __cpp_exceptions) || (defined __EXCEPTIONS))
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#elif (defined __clang__)
#	if (__has_feature(cxx_exceptions))
#		define CCTX_FEATURES_CPP_EXCEPTIONS
#	endif
#elif (defined _MSC_VER)
#	if (defined _CPPUNWIND)
#		define CCTX_FEATURES_CPP_EXCEPTIONS
#	endif
#endif

// RTTI
#if (defined __cpp_rtti)
#	define CCTX_FEATURES_CPP_RTTI
#elif (defined __clang__)
#	if (__has_feature(cxx_rtti))
#		define CCTX_FEATURES_CPP_RTTI
#	endif
#elif (defined __GCC__)
#	if (defined __GXX_RTTI)
#		define CCTX_FEATURES_CPP_RTTI
#	endif
#elif (defined __IBMCPP__)
#	if (!defined __NO_RTTI__)
#		define CCTX_FEATURES_CPP_RTTI
#	endif
#elif (defined _MSC_VER)
#	if (defined _CPPRTTI)
#		define CCTX_FEATURES_CPP_RTTI
#	endif
#endif

// R-value ref
#if ((defined __cpp_rvalue_references) || \
	 ((defined _MSC_VER) && (_MSC_VER >= 1600)))
#	define CCTX_FEATURES_CPP_RVALUE_REF
#elif (defined __clang__)
#	if (__has_extension(cxx_rvalue_references))) || \
#		define CCTX_FEATURES_CPP_RVALUE_REF
#	endif
#endif

// Const expressions
#if (defined __cpp_constexpr)
#	define CCTX_FEATURES_CPP_CONST_EXP
#elif (defined __clang__)
#	if (__has_feature(cxx_constexpr))
#		define CCTX_FEATURES_CPP_CONST_EXP
#	endif
#endif

#if (defined __cpp_if_constexpr)
#	define CCTX_FEATURES_CPP_IF_CONST_EXP
#endif

// Static assert
#if ((defined __cpp_static_assert))
#	define CCTX_FEATURES_CPP_STATIC_ASSERT
#endif

// Align as
#if (defined __alignas_is_defined)
#	define CCTX_FEATURES_CPP_ALIGN_AS
#elif (defined __clang__)
#	if (__has_feature(cxx_alignas))
#		define CCTX_FEATURES_CPP_ALIGN_AS
#	endif
#endif

// Align of
#if (defined __clang__)
#	if (__has_feature(cxx_alignof))
#		define CCTX_FEATURES_CPP_ALIGN_OF
#	endif
#elif (defined _MSC_VER)
#	 if (__cplusplus > 201103L)
#		define CCTX_FEATURES_CPP_ALIGN_OF
#	elif (_MSC_VER >= 1400)
#		define CCTX_FEATURES_CPP_ALIGN_OF
#		define alignof __alignof
#	endif
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
