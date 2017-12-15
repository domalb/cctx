#ifndef _CCTX_UTILS_H
#define _CCTX_UTILS_H
#pragma once

// GCC
#ifndef __GNUC_PATCHLEVEL__
#	define __GNUC_PATCHLEVEL__ 0
#endif
#define _CCTX_GCC_VERSION(major, minor, patch) ((major) * 10000 + (minor) * 100 + (patch))
#define _CCTX_GCC_VERSION_MIN(major, minor, patch) (_CCTX_GCC_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__) >= _CCTX_GCC_VERSION(major, minor, patchlevel))

#endif // _CCTX_UTILS_H

