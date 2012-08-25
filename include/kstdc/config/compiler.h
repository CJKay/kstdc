#ifndef KSTDC_CONFIG_COMPILER
#	define KSTDC_CONFIG_COMPILER

#	if defined(__cplusplus) && !defined(__KSTD_CPLUSPLUS__)
#		define __KSTD_CPLUSPLUS__ 1
#	elif !defined(__KSTDCPP__)
#		ifdef __clang__
#			if __clang_major__ >= 3 && __clang_minor__ >= 1
#				define __KSTD_COMPILER__ clang
#				define __KSTD_COMPILER_VERSION__ (__clang_major__ * 10000 + __clang_minor__ * 100 + __clang_patchlevel__)
#				define __KSTD_COMPILER_VERSION_MAJOR__ __clang_major__
#				define __KSTD_COMPILER_VERSION_MINOR__ __clang_minor__
#			else
#				error "Please update your clang compiler to 3.1 or later."
#			endif
#		elif __GNUC__
#			if GCC_VERSION > 40700
#				define __KSTD_COMPILER__ gcc
#				define __KSTD_COMPILER_VERSION__ (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#				define __KSTD_COMPILER_VERSION_MAJOR__ __GNUC__
#				define __KSTD_COMPILER_VERSION_MINOR__ __GNUC_MINOR__
#			else
#				error "Please update your gcc compiler to version 4.7.0 or later."
#			endif
#		else
#			error "Sorry, kstdc does not support this compiler."
#		endif
#	endif

#endif
