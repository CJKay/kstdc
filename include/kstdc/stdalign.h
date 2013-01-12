#pragma once
#ifndef KSTDC_STDALIGN
#	define KSTDC_STDALIGN
	
#	include "config/externc.h"
#	include "config/cpp.h"

#	ifdef __KSTDCPP__
#		define __alignas_is_defined		0
#		define __alignof_is_defined		0
#	else
#		define alignas					_Alignas
#		define __alignas_is_defined		1

#		define alignof					_Alignof
#		define __alignof_is_defined		1
#	endif

#endif
