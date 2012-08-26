#ifndef KSTDC_STRING
#	define KSTDC_STRING

#	include <kstdc/config/config.h>
#	include <kstdc/config/sizetype.h>

	__KSTD_EXTERNC_BEGIN
		
		void *memcpy(void * restrict src, const void * restrict dst, size_t n);
		
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#			define memcpy(s1, s2, n)	__builtin_memcpy(s1, s2, n)
#		endif
		
	__KSTD_EXTERNC_END

#endif

