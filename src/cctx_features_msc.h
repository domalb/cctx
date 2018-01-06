#ifndef _CCTX_FEATURES_MSC_H
#define _CCTX_FEATURES_MSC_H
#pragma once

#include "cctx_utils.h"

// http://www.boost.org/doc/libs/1_66_0/boost/config/compiler/visualc.hpp

#if (defined __cplusplus)

#	if (defined _CPPUNWIND)
#		define CCTX_FEATURES_CPP_EXCEPTIONS
#	endif

#	if (defined _CPPRTTI)
#		define CCTX_FEATURES_CPP_RTTI
#	endif

#if (_MSC_VER >= 1600)
#	define CCTX_FEATURES_CPP_RVALUE_REF
#	define CCTX_FEATURES_CPP_STATIC_ASSERT
#endif

#if ((_MSC_FULL_VER >= 190024210) && (!defined _M_CEE_PURE))
#	define CCTX_FEATURES_CPP_CONST_EXP
#endif

#if (defined __cpp_if_constexpr)
#	define CCTX_FEATURES_CPP_IF_CONST_EXP
#endif

#if (_MSC_FULL_VER < 190023026)
#	define CCTX_FEATURES_CPP_ALIGN_AS
#endif

# if (__cplusplus > 201103)
#	define CCTX_FEATURES_CPP_ALIGN_OF
#elif (_MSC_VER >= 1400)
#	define CCTX_FEATURES_CPP_ALIGN_OF
#	define alignof __alignof
#endif

#endif // __cplusplus

#endif // _CCTX_FEATURES_MSC_H
