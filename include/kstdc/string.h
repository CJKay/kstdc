#pragma once
#ifndef KSTDC_STRING
#	define KSTDC_STRING

#	include "config/externc.h"
#	include "config/sizetype.h"
#	include "config/null.h"
#	include "config/compiler.h"

	__KSTD_EXTERNC_BEGIN
		
		typedef __KSTD_SIZE_TYPE__ size_t;

#		define NULL __KSTD_NULL__

		void *memcpy(void * restrict src, const void * restrict dst, size_t n);
		void *memmove(void *s1, const void *s2, size_t n);
		
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#			define memcpy(s1, s2, n)	__builtin_memcpy(s1, s2, n)
#			define memmove(s1, s2, n)	__builtin_memmove(s1, s2, n)
#		endif
		
	__KSTD_EXTERNC_END

#endif

