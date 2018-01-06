#ifndef _CCTX_FEATURES_GCC_H
#define _CCTX_FEATURES_GCC_H
#pragma once

#include "cctx_utils.h"

#if (defined __cplusplus)

#if (defined __cpp_exceptions) || (defined __EXCEPTIONS))
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#endif

#if (defined __GXX_RTTI)
#	define CCTX_FEATURES_CPP_RTTI
#endif

#if (defined __cpp_rvalue_references)
#	define CCTX_FEATURES_CPP_RVALUE_REF
#endif

#if (defined __cpp_constexpr)
#	define CCTX_FEATURES_CPP_CONST_EXP
#endif

#if (defined __cpp_if_constexpr)
#	define CCTX_FEATURES_CPP_IF_CONST_EXP
#endif

#if (defined __cpp_static_assert)
#	define CCTX_FEATURES_CPP_STATIC_ASSERT
#endif

#if (defined __alignas_is_defined)
#	define CCTX_FEATURES_CPP_ALIGN_AS
#endif

#if _CCTX_GCC_VERSION_MIN(4, 2, 1)
#	define CCTX_FEATURES_CPP_ALIGN_OF
#	define alignof __alignof__
#endif

#if ((defined __GNUC__) && _CCTX_GCC_VERSION_MIN(4, 3, 0))
#	define O_COMPILER_SUPPORTS_STATIC_ASSERT
#endif

#endif // __cplusplus

#endif // _CCTX_FEATURES_GCC_H
