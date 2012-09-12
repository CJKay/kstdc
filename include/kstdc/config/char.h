#pragma once
#ifndef KSTDC_CONFIG_CHAR
#	define KSTDC_CONFIG_CHAR

#	include "compiler.h"

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		ifdef __CHAR_UNSIGNED__
#			define __KSTD_CHAR_UNSIGNED__ 1
#		else
#			define __KSTD_CHAR_UNSIGNED__ 0
#		endif
#	else
#		error "No way to test for unsigned char on this compiler."
#	endif

#endif
