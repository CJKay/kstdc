#include <kstd/config/config.h>

KSTDC_EXTERNC_BEGIN

#	ifdef KSTDC_ASSERT
#		undef KSTDC_ASSERT
#		undef assert
#	endif
	
#	ifndef KSTDC_ASSERT
#		define KSTDC_ASSERT
		
#		ifdef NDEBUG
#			define assert(ignore) kstd_static_cast(void, 0)
#			warning "No internal method has yet been implemented for assert()."
#		else
#			define assert(ignore) kstd_static_cast(void, 0)
#		endif
		
#		ifndef __KSTD_CPLUSPLUS__
#			define static_assert(condition, message) _Static_assert(condition, message)
#		endif
	
#	endif

KSTDC_EXTERNC_END
