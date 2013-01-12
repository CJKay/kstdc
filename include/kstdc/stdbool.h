#pragma once
#ifndef KSTDC_STDBOOL
#	define KSTDC_STDBOOL
	
#	include "config/cpp.h"

#	if !__KSTDCPP__
#		define bool	_Bool
#		define true 1
#		define false 0
#		define __bool_true_false_are_defined 1
#	endif

#endif
