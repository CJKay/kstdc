#pragma once
#ifndef KSTDC_CONFIG_TARGET
#	define KSTDC_CONFIG_TARGET

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		if defined(__i386__)
#			define __KSTD_ARCH__ i386
#		elif defined(__x86_64__)
#			define __KSTD_ARCH__ amd64
#		else
#			define __KSTD_ARCH__ unknown
#		endif
#	endif

#endif
