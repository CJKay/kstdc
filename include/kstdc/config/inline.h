#ifndef KSTDC_CONFIG_INLINE
#	define KSTDC_CONFIG_INLINE

#	ifdef __KSTD_NO_INLINE__
#		define __KSTD_INLINE
#		define __KSTD_FORCE_INLINE
#	else
#		define __KSTD_INLINE inline
#		ifdef __KSTD_FORCE_INLINE__
#			if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#				define __KSTD_FORCE_INLINE __attribute__((always_inline)) inline
#			else
#				define __KSTD_FORCE_INLINE
#				warning "No way to force inline on this compiler."
#			endif
#		endif
#	endif

#endif
