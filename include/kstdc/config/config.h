#ifndef KSTDC_CONFIG_CONFIG
#	define KSTDC_CONFIG_CONFIG

#	include <kstdc/config/compiler.h>
#	include <kstdc/config/target.h>

#	define __KSTDC__ 1

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		ifdef __CHAR_UNSIGNED__
#			define __KSTD_CHAR_UNSIGNED__ 1
#		endif
#	else
#		warning "No way to test for unsigned char on this compiler."
#	endif

#	ifdef __KSTD_CPLUSPLUS__
#		define __kstd_static_cast(T, U) static_cast<T>(U)
#		define __kstd_reinterpret_cast(T, U) reinterpret_cast<T>(U)
#		define __kstd_dynamic_cast(T, U) dynamic_cast<T>(U)
#		define __kstd_const_cast(T, U) const_cast<T>(U)

#		define __KSTD_EXTERNC_BEGIN extern "C" {
#		define __KSTD_EXTERNC_END }
#	else
#		define __kstd_static_cast(T, U) ((T)U)
#		define __kstd_reinterpret_cast(T, U) ((T)U)
#		define __kstd_dynamic_cast(T, U) ((T)U)
#		define __kstd_const_cast(T, U) ((T)U)

#		define __KSTD_EXTERNC_BEGIN
#		define __KSTD_EXTERNC_END
#	endif
	
#	ifdef __KSTD_NO_INLINE__
#		define KSTD_INLINE
#		define KSTD_FORCE_INLINE
#	else
#		define __KSTD_INLINE inline
#		ifdef __KSTD_FORCE_INLINE__
#			if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#				define __KSTD_FORCED_INLINE __attribute__((always_inline)) inline
#			else
#				define __KSTD_FORCED_INLINE
#				warning "No way to force inline on this compiler."
#			endif
#		endif
#	endif

#endif