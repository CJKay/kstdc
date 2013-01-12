#pragma once
#ifndef KSTDC_STDINT
#	define KSTDC_STDINT
	
#	include "config/compiler.h"

	__KSTD_EXTERNC_BEGIN

#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
			typedef __INT8_TYPE__			int8_t;
			typedef __INT16_TYPE__			int16_t;
			typedef __INT32_TYPE__			int32_t;
			typedef __INT64_TYPE__			int64_t;
			
			typedef __UINT8_TYPE__			uint8_t;
			typedef __UINT16_TYPE__ 		uint16_t;
			typedef __UINT32_TYPE__ 		uint32_t;
			typedef __UINT64_TYPE__ 		uint64_t;
			
			typedef __INT_LEAST8_TYPE__		int_least8_t;
			typedef __INT_LEAST16_TYPE__	int_least16_t;
			typedef __INT_LEAST32_TYPE__	int_least32_t;
			typedef __INT_LEAST64_TYPE__ 	int_least64_t;
			
			typedef __UINT_LEAST8_TYPE__	uint_least8_t;
			typedef __UINT_LEAST16_TYPE__	uint_least16_t;
			typedef __UINT_LEAST32_TYPE__	uint_least32_t;
			typedef __UINT_LEAST64_TYPE__ 	uint_least64_t;
			
			typedef __UINT_LEAST8_TYPE__	uint_least8_t;
			typedef __UINT_LEAST16_TYPE__	uint_least16_t;
			typedef __UINT_LEAST32_TYPE__	uint_least32_t;
			typedef __UINT_LEAST64_TYPE__ 	uint_least64_t;
			
			typedef __INT_FAST8_TYPE__		int_fast8_t;
			typedef __INT_FAST16_TYPE__		int_fast16_t;
			typedef __INT_FAST32_TYPE__		int_fast32_t;
			typedef __INT_FAST64_TYPE__ 	int_fast64_t;
			
			typedef __UINT_FAST8_TYPE__		uint_fast8_t;
			typedef __UINT_FAST16_TYPE__	uint_fast16_t;
			typedef __UINT_FAST32_TYPE__	uint_fast32_t;
			typedef __UINT_FAST64_TYPE__ 	uint_fast64_t;
			
			typedef __INTMAX_TYPE__			intmax_t;
			typedef __UINTMAX_TYPE__		uintmax_t;
			
#			if defined(__STDC_LIMIT_MACROS)
#				define UINT8_MAX				__UINT8_MAX__
#				define INT8_MAX					__INT8_MAX__
#				define INT8_MIN					(-__INT8_MAX__ - 1)
#				define UINT16_MAX				__UINT16_MAX__
#				define INT16_MAX				__INT16_MAX__
#				define INT16_MIN				(-__INT16_MAX__ - 1)
#				define UINT32_MAX				__UINT32_MAX__
#				define INT32_MAX				__INT32_MAX__
#				define INT32_MIN				(-__INT32_MAX__ - 1)
#				define UINT64_MAX				__UINT64_MAX__
#				define INT64_MAX				__INT64_MAX__
#				define INT64_MIN				(-__INT64_MAX__ - 1)
				
#				define UINT_LEAST8_MAX			__UINT_LEAST8_MAX__
#				define INT_LEAST8_MAX			__INT_LEAST8_MAX__
#				define INT_LEAST8_MIN			(-__INT_LEAST8_MAX__ - 1)
#				define UINT_LEAST16_MAX			__UINT_LEAST16_MAX__
#				define INT_LEAST16_MAX			__INT_LEAST16_MAX__
#				define INT_LEAST16_MIN			(-__INT_LEAST16_MAX__ - 1)
#				define UINT_LEAST32_MAX			__UINT_LEAST32_MAX__
#				define INT_LEAST32_MAX			__INT_LEAST32_MAX__
#				define INT_LEAST32_MIN			(-__INT_LEAST32_MAX__ - 1)
#				define UINT_LEAST64_MAX			__UINT_LEAST64_MAX__
#				define INT_LEAST64_MAX			__INT_LEAST64_MAX__
#				define INT_LEAST64_MIN			(-__INT_LEAST64_MAX__ - 1)
				
#				define UINT_FAST8_MAX			__UINT_FAST8_MAX__
#				define INT_FAST8_MAX			__INT_FAST8_MAX__
#				define INT_FAST8_MIN			(-__INT_FAST8_MAX__ - 1)
#				define UINT_FAST16_MAX			__UINT_FAST16_MAX__
#				define INT_FAST16_MAX			__INT_FAST16_MAX__
#				define INT_FAST16_MIN			(-__INT_FAST16_MAX__ - 1)
#				define UINT_FAST32_MAX			__UINT_FAST32_MAX__
#				define INT_FAST32_MAX			__INT_FAST32_MAX__
#				define INT_FAST32_MIN			(-__INT_FAST32_MAX__ - 1)
#				define UINT_FAST64_MAX			__UINT_FAST64_MAX__
#				define INT_FAST64_MAX			__INT_FAST64_MAX__
#				define INT_FAST64_MIN			(-__INT_FAST64_MAX__ - 1)
				
#				define UINTPTR_MAX				__UINTPTR_MAX__
#				define INTPTR_MAX				__INTPTR_MAX__
#				define INTPTR_MIN				(-__INTPTR_MAX__ - 1)
				
#				define UINTMAX_MAX				__UINTMAX_MAX__
#				define INTMAX_MAX				__INTMAX_MAX__
#				define INTMAX_MIN				(-__INTMAX_MAX__ - 1)
				
#				define PTRDIFF_MAX				__PTRDIFF_MAX__
#				define PTRDIFF_MIN				(-PTRDIFF_MAX)
				
#				define SIZE_MAX					__SIZE_MAX__
				
#				define WCHAR_MAX				__WCHAR_MAX__
#				define WCHAR_MIN				(-WCHAR_MAX)
				
#				define WINT_MAX					__WINT_MAX__
#				define WINT_MIN					(-WINT_MAX)
#			endif
			
#			if defined(__STDC_CONSTANT_MACROS)
#				define INT8_C(v)				__INT8_C(v)
#				define UINT8_C(v)				__UINT8_C(v)
#				define INT16_C(v)				__INT16_C(v)
#				define UINT16_C(v)				__UINT16_C(v)
#				define INT32_C(v)				__INT32_C(v)
#				define UINT32_C(v)				__UINT32_C(v)
#				define INT64_C(v)				__INT64_C(v)
#				define UINT64_C(v)				__UINT64_C(v)
			
#				define INTMAX_C(v)				__INTMAX_C(v)
#				define UINTMAX_C(v)				__UINTMAX_C(v)
#			endif
#		else
#			error "Integer types not implemented for this compiler."
#		endif

	__KSTD_EXTERNC_END

#endif

