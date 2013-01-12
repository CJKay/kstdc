#pragma once
#ifndef __KSTDC_CONFIG_CAST_H__
#	define __KSTDC_CONFIG_CAST_H__
	
#	include "cpp.h"

/*!
 * @def __kstd_static_cast(T, U)
 * Internal static cast.
 * @def __kstd_reinterpret_cast(T, U)
 * Internal reinterpret cast.
 * @def __kstd_dynamic_cast(T, U)
 * Internal dynamic cast.
 * @def __kstd_const_cast(T, U)
 * Internal const cast.
 */
		
#	if __KSTDCPP__
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
