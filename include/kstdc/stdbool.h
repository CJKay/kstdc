#pragma once
#ifndef KSTDC_STDBOOL
#	define KSTDC_STDBOOL
	
#	include <kstdc/config/config.h>

	__KSTD_EXTERNC_BEGIN
	
#		ifndef __KSTD_CPLUSPLUS__
#			define bool	_Bool
#			define true 1
#			define false 0
#			define __bool_true_false_are_defined 1
#		else
#			define __bool_true_false_are_defined 0
#		endif

	__KSTD_EXTERNC_END

#endif
