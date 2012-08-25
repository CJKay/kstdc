#ifndef KSTDC_CONFIG_SIZETYPE
#	define KSTDC_CONFIG_SIZETYPE

#	include <kstdc/config/externc.h>
	
	__KSTD_EXTERNC_BEGIN
	
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
			typedef __SIZE_TYPE__ size_t;
#		else
#			warning "No way to implement size_t on this compiler."
#		endif
	
	__KSTD_EXTERNC_BEGIN

#endif
