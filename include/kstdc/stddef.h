#ifndef KSTDC_STDDEF
#	define KSTDC_STDDEF
	
#	include <kstdc/config/config.h>
	
	__KSTD_EXTERNC_BEGIN
		
#		if __KSTDC_COMPILER__ == gcc || __KSTDC_COMPILER__ == clang
			typedef __PTRDIFF_TYPE__ ptrdiff_t;
			typedef __SIZE_TYPE__ size_t;
			typedef __WCHAR_TYPE__ wchar_t;
			
			typedef struct {
				long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
				long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
			} max_align_t;
			
#			ifndef __KSTD_CPLUSLUS__
#				define NULL kstd_static_cast(void *, 0)
#			else
#				define NULL 0
#			endif
			
#			define offsetof(t, md) kstd_static_cast(size_t, __builtin_offsetof(t, md))
#		else
#			error "Basic definitions not implemented for this compiler."
#		endif
		
	__KSTD_EXTERNC_END
	
#endif
