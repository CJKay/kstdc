#pragma once
#ifndef KSTDC_CONFIG_TARGET
#	define KSTDC_CONFIG_TARGET

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		if defined(__i386__)
#			define __KSTD_ARCH__ x86
#			define __KSTD_ARCH_BITS__ 32
#		elif defined(__x86_64__)
#			define __KSTD_ARCH__ x86
#			define __KSTD_ARCH_BITS__ 64
#		endif
#	endif

#endif
