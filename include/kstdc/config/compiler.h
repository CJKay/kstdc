#pragma once
#ifndef __KSTDC_CONFIG_COMPILER_H__
#	define __KSTDC_CONFIG_COMPILER_H__

#	include "cpp.h"

/*!
 * @def __KSTD_COMPILER__
 * The current compiler.
 * @def __KSTD_COMPILER_VERSION__
 * The full version of the compiler.
 * @def __KSTD_COMPILER_VERSION_MAJOR__
 * The major version of the compiler.
 * @def __KSTD_COMPILER_VERSION_MINOR__
 * The minor version of the compiler.
 */

#	if __KSTDCPP__
#		include <kstdcpp/config/compiler.hpp>
#	else
#		ifdef __clang__
#			define __KSTD_COMPILER__ clang
#			define __KSTD_COMPILER_VERSION__ (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__)
#			define __KSTD_COMPILER_VERSION_MAJOR__ __clang_major__
#			define __KSTD_COMPILER_VERSION_MINOR__ __clang_minor__
#		elif __GNUC__
#			define __KSTD_COMPILER__ gcc
#			define __KSTD_COMPILER_VERSION__ (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#			define __KSTD_COMPILER_VERSION_MAJOR__ __GNUC__
#			define __KSTD_COMPILER_VERSION_MINOR__ __GNUC_MINOR__
#		else
#			error "Sorry, kstdc does not support this compiler."
#		endif
#	endif

#endif
