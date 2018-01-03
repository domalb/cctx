#ifndef _CCTX_FEATURES_MSC_H
#define _CCTX_FEATURES_MSC_H
#pragma once

#include "cctx_utils.h"

// Exceptions
#if (defined _CPPUNWIND)
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#endif

// RTTI
#if (defined _CPPRTTI)
#	define CCTX_FEATURES_CPP_RTTI
#endif

// R-value ref
#if (_MSC_VER >= 1600)
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
//#if (_MSC_VER >= 1600)))
//#	define O_COMPILER_SUPPORTS_STATIC_ASSERT
//#endif

// Align as

// Align of
# if (__cplusplus > 201103L)
#	define CCTX_FEATURES_CPP_ALIGN_OF
#elif (_MSC_VER >= 1400)
#	define CCTX_FEATURES_CPP_ALIGN_OF
#	define alignof __alignof
#endif

#endif // _CCTX_FEATURES_MSC_H
