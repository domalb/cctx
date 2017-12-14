#ifndef _CCTX_FEATURES_H
#define _CCTX_FEATURES_H
#pragma once

// Features
//	CCTX_FEATURES_EXCEPTIONS
//	CCTX_FEATURES_RTTI
//	CCTX_FEATURES_RVALUE_REF
//	CCTX_FEATURES_CONST_EXP
//	CCTX_FEATURES_STATIC_ASSERT
//	CCTX_FEATURES_COUNTER

#define _CCTX_GCC_VERSION_GE(major, minor) ((__GNUC__ > major) || ((__GNUC__ == major) && (__GNUC_MINOR__ >= minor)))

#if ((defined __cpp_exceptions) || (defined __EXCEPTIONS) || \
	 ((defined  _MSC_VER) && (defined _CPPUNWIND)))
#	define CCTX_FEATURES_EXCEPTIONS
#endif

#if ((defined __cpp_rtti) || \
	 ((defined __clang__) && (__has_feature(cxx_rtti))) || \
	 ((defined  __GCC__) && (defined __GXX_RTTI)) || \
	 ((defined  _MSC_VER) && (defined _CPPRTTI)))
#	define CCTX_FEATURES_RTTI
#endif

#if ((defined __cpp_rvalue_references) || \
	 ((defined __clang__) && (__has_extension(cxx_rvalue_references))) || \
	 ((defined _MSC_VER) && (_MSC_VER >= 1600)))
#	define CCTX_FEATURES_RVALUE_REF
#endif

#if (defined __cpp_if_constexpr)
#	define CCTX_FEATURES_CONST_EXP
#endif

#if ((defined __cpp_static_assert) ||
#	define CCTX_FEATURES_CONST_EXP
#endif

#if (((defined __clang__) && (__cplusplus > 201103L)) || \
	 ((defined __GNUC__) && _CCTX_GCC_VERSION_GE(4, 3)) || \
	 ((defined _MSC_VER) && (_MSC_VER >= 1600)))
#	define O_COMPILER_SUPPORTS_STATIC_ASSERT
#endif

#endif // _CCTX_FEATURES_H

