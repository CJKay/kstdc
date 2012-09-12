#pragma once
#ifndef KSTDC_FLOAT
#	define KSTDC_FLOAT
	
#	include <kstdc/config/config.h>

	__KSTD_EXTERNC_BEGIN
		
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#			define FLT_ROUNDS			(__builtin_flt_rounds())
			
#			define FLT_EVAL_METHOD		__FLT_EVAL_METHOD__
			
#			define FLT_HAS_SUBNORM		__FLT_HAS_DENORM__
#			define DBL_HAS_SUBNORM		__DBL_HAS_DENORM__
#			define LDBL_HAS_SUBNORM		__LDBL_HAS_DENORM__
			
#			define FLT_RADIX			__FLT_RADIX__
			
#			define FLT_MANT_DIG			__FLT_MANT_DIG__
#			define DBL_MANT_DIG			__DBL_MANT_DIG__
#			define LDBL_MANT_DIG		__LDBL_MANT_DIG__
			
			// FIXME: Change to just __{FLT, DBL, LDBL}_DECIMAL_DIG__ when compiler support is better
#			if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#				ifndef __FLT_DECIMAL_DIG__
#					define FLT_DECIMAL_DIG (2 + __FLT_DIG__ * 3010 / 10000)
#				else
#					define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#				endif
				
#				ifndef __DBL_DECIMAL_DIG__
#					define DBL_DECIMAL_DIG (2 + __DBL_DIG__ * 3010 / 10000)
#				else
#					define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#				endif
				
#				ifndef __LDBL_DECIMAL_DIG__
#					define LDBL_DECIMAL_DIG (2 + __LDBL_DIG__ * 3010 / 10000)
#				else
#					define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#				endif
#			else
#				#error "__{FLT, DBL, LDBL}_DECIMAL_DIG__ missing from this compiler."
#			endif
			
#			define DECIMAL_DIG		__DECIMAL_DIG__
			
#			define FLT_DIG			__FLT_DIG__
#			define DBL_DIG			__DBL_DIG__
#			define LDBL_DIG			__LDBL_DIG__
			
#			define FLT_MIN_EXP		__FLT_MIN_EXP__
#			define DBL_MIN_EXP		__DBL_MIN_EXP__
#			define LDBL_MIN_EXP		__LDBL_MIN_EXP__
			
#			define FLT_MIN_10_EXP	__FLT_MIN_10_EXP__
#			define DBL_MIN_10_EXP	__DBL_MIN_10_EXP__
#			define LDBL_MIN_10_EXP	__LDBL_MIN_10_EXP__
			
#			define FLT_MAX_10_EXP	__FLT_MAX_10_EXP__
#			define DBL_MAX_10_EXP	__DBL_MAX_10_EXP__
#			define LDBL_MAX_10_EXP	__LDBL_MAX_10_EXP__
			
#			define FLT_MAX_EXP		__FLT_MAX_EXP__
#			define DBL_MAX_EXP		__DBL_MAX_EXP__
#			define LDBL_MAX_EXP		__LDBL_MAX_EXP__
			
#			define FLT_EPSILON		__FLT_EPSILON__
#			define DBL_EPSILON		__DBL_EPSILON__
#			define LDBL_EPSILON		__LDBL_EPSILON__
			
#			define FLT_MIN			__FLT_MIN__
#			define DBL_MIN			__DBL_MIN__
#			define LDBL_MIN			__LDBL_MIN__
			
#			define FLT_TRUE_MIN		__FLT_TRUE_MIN__
#			define DBL_TRUE_MIN		__DBL_TRUE_MIN__
#			define LDBL_TRUE_MIN	__LDBL_TRUE_MIN__
#		else
#			error "Floating point types not implemented for this compiler."
#		endif

	__KSTD_EXTERNC_END
	
#endif
