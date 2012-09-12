#pragma once
#ifndef KSTDC_LIMITS
#	define KSTDC_LIMITS
	
#	include <kstdc/config/config.h>

	__KSTD_EXTERNC_BEGIN
	
#		if __KSTDC_COMPILER__ == gcc || __KSTDC_COMPILER__ == clang
#			define MB_LEN_MAX		__MB_LEN_MAX__
#			define CHAR_BIT			__CHAR_BIT__
			
#			ifdef __CHAR_UNSIGNED__
#				define CHAR_MIN		(__kstd_static_cast(char, 0))
#				define CHAR_MAX		(__kstd_static_cast(char, UCHAR_MAX))
#			else
#				define CHAR_MIN		(__kstd_static_cast(char, SCHAR_MIN))
#				define CHAR_MAX		(__kstd_static_cast(char, SCHAR_MAX))
#			endif
			
#			define SCHAR_MAX		(__kstd_static_cast(signed char, __SCHAR_MAX__))
#			define SCHAR_MIN		(__kstd_static_cast(signed char, -__SCHAR_MAX__ - 1))
			
#			define UCHAR_MAX		(__kstd_static_cast(unsigned char, __SCHAR_MAX__ * 2U + 1))
			
#			define SHRT_MAX			(__kstd_static_cast(signed short, __SHRT_MAX__))
#			define SHRT_MIN			(__kstd_static_cast(signed short, -__SHRT_MAX__ - 1))
			
#			define USHRT_MAX		(__kstd_static_cast(unsigned short, __SHRT_MAX__ * 2U + 1))
			
#			define INT_MAX			(__kstd_static_cast(signed int, __INT_MAX__))
#			define INT_MIN			(__kstd_static_cast(signed int, -__INT_MAX__ - 1))
			
#			define UINT_MAX			(__kstd_static_cast(unsigned int, __INT_MAX__ * 2U + 1))
			
#			define LONG_MAX			(__kstd_static_cast(signed long, __LONG_MAX__))
#			define LONG_MIN			(__kstd_static_cast(signed long, -__LONG_MAX__ - 1))
			
#			define ULONG_MAX		(__kstd_static_cast(unsigned long, __LONG_MAX__ * 2UL + 1))
			
#			define LLONG_MAX		(__kstd_static_cast(signed long long, __LONG_LONG_MAX__))
#			define LLONG_MIN		(__kstd_static_cast(signed long long, -__LONG_LONG_MAX__ - 1))
			
#			define ULLONG_MAX		(__kstd_static_cast(unsigned long long, __LONG_LONG_MAX__ * 2ULL + 1))
#		else
#			error "Integer limits not implemented for this compiler."
#		endif

	__KSTD_EXTERNC_END

#endif
