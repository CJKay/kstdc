#ifndef KSTDC_STDDEF
#	define KSTDC_STDDEF
	
#	include <kstdc/config/config.h>
#	include <kstdc/config/sizetype.h>
#	include <kstdc/config/null.h>
	
	__KSTD_EXTERNC_BEGIN
		
#		if __KSTDC_COMPILER__ == gcc || __KSTDC_COMPILER__ == clang
			typedef __PTRDIFF_TYPE__ ptrdiff_t;
			typedef __WCHAR_TYPE__ wchar_t;
			
			typedef struct {
				long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
				long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
			} max_align_t;
			
#			define offsetof(t, md) kstd_static_cast(size_t, __builtin_offsetof(t, md))
#		else
#			error "Basic definitions not implemented for this compiler."
#		endif
		
	__KSTD_EXTERNC_END
	
#endif
