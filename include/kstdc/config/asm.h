#ifndef KSTDC_CONFIG_ASM
#	define KSTDC_CONFIG_ASM
	
#	include <kstdc/config/compiler.h>
	
#	ifndef __KSTD_NO_INLINEASM__
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#			define __kstd_asm_gnu(text) __asm__(text)
#			define __kstd_asm_alternative(text)
#		else
#			error "No way to implement inline asm on this compiler."
#		endif
#	else
#		define __kstd_asm_gnu(text)
#		define __kstd_asm_alternative(text) { text }
#	endif

#endif
