#pragma once
#ifndef KSTDC_CONFIG_COMPILER
#	define KSTDC_CONFIG_COMPILER

#	if !defined(__KSTDCPP__)
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
#	else
#		include <kstdcpp/config/compiler.hpp>
#	endif

#endif
