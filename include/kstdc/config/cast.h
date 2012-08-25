#ifndef KSTDC_CONFIG_CAST
#	define KSTDC_CONFIG_CAST
	
#	include <kstdc/config/cpp.h>
		
#	ifdef __KSTD_CPLUSPLUS__
#		define __kstd_static_cast(T, U) (static_cast<T>(U))
#		define __kstd_reinterpret_cast(T, U) (reinterpret_cast<T>(U))
#		define __kstd_dynamic_cast(T, U) (dynamic_cast<T>(U))
#		define __kstd_const_cast(T, U) (const_cast<T>(U))
#	else
#		define __kstd_static_cast(T, U) ((T)U)
#		define __kstd_reinterpret_cast(T, U) ((T)U)
#		define __kstd_dynamic_cast(T, U) ((T)U)
#		define __kstd_const_cast(T, U) ((T)U)
#	endif

#endif
