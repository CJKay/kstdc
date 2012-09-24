#pragma once
#ifndef KSTDC_CONFIG_ASM
#	define KSTDC_CONFIG_ASM
	
#	include "compiler.h"
	
#	if __KSTD_INLINEASM__
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#			define __kstd_gnuasm(text, ...) __asm__ volatile(text : __VA_ARGS__)
#			define __kstd_noasm(text)
#		else
#			error "No way to implement inline asm on this compiler. Please define __KSTD_NO_INLINEASM__."
#		endif
#	else
#		define __kstd_gnuasm(text, ...)
#		define __kstd_noasm(text) do { text } while(0)
#	endif

#endif
