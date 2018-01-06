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

#if (defined __clang__)
#	include "cctx_features_clang.h"
#elif (defined __GCC__)
#	include "cctx_features_gcc.h"
#elif (defined _MSC_VER)
#	include "cctx_features_msc.h"
#else

// Exceptions
#if ((defined __cpp_exceptions) || (defined __EXCEPTIONS))
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#endif

// RTTI
#if (defined __cpp_rtti)
#	define CCTX_FEATURES_CPP_RTTI
#elif (defined __IBMCPP__)
#	if (!defined __NO_RTTI__)
#		define CCTX_FEATURES_CPP_RTTI
#	endif
#endif

// R-value ref
#if (defined __cpp_rvalue_references)
#	define CCTX_FEATURES_CPP_RVALUE_REF
#endif

// Const expressions
#if (defined __cpp_constexpr)
#	define CCTX_FEATURES_CPP_CONST_EXP
#endif

// If const expressions
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
#endif

// Align of

#endif

#endif // _CCTX_FEATURES_H
