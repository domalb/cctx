#ifndef _CCTX_FEATURES_CLANG_H
#define _CCTX_FEATURES_CLANG_H
#pragma once

// Exceptions
#if (__has_extension(cxx_exceptions))
#	define CCTX_FEATURES_CPP_EXCEPTIONS
#endif

// RTTI
#if (__has_extension(cxx_rtti))
#	define CCTX_FEATURES_CPP_RTTI
#endif

// R-value ref
#if (__has_extension(cxx_rvalue_references))
#	define CCTX_FEATURES_CPP_RVALUE_REF
#endif

// Const expressions
#if (__has_extension(cxx_constexpr))
#	define CCTX_FEATURES_CPP_CONST_EXP
#endif

// If const expressions
//#if (__has_extension())
//#	define CCTX_FEATURES_CPP_IF_CONST_EXP
//#endif

// Static assert
#if (__has_extension(cxx_static_assert))
#	define CCTX_FEATURES_CPP_STATIC_ASSERT
#endif

// Align as
#if (__has_extension(cxx_alignas))
#	define CCTX_FEATURES_CPP_ALIGN_AS
#endif

// Align of
#if (__has_extension(cxx_alignof))
#	define CCTX_FEATURES_CPP_ALIGN_OF
#endif

#endif // _CCTX_FEATURES_CLANG_H
