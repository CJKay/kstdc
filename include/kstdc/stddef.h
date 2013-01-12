#pragma once
#ifndef KSTDC_STDDEF
#	define KSTDC_STDDEF
	
#	include "config/compiler.h"
#	include "config/sizetype.h"
#	include "config/null.h"
	
	__KSTD_EXTERNC_BEGIN
		
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
			typedef __PTRDIFF_TYPE__ ptrdiff_t;
			typedef __WCHAR_TYPE__ wchar_t;
			
			typedef struct {
				long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
				long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
			} max_align_t;
			
			typedef __KSTD_SIZE_TYPE__ size_t;
			
#			define NULL __KSTD_NULL__
#			define offsetof(t, md) __builtin_offsetof(t, md)
#		else
#			error "Basic definitions not implemented for this compiler."
#		endif
		
	__KSTD_EXTERNC_END
	
#endif
