#pragma once
#ifndef KSTDC_CONFIG_EXTERNC
#	define KSTDC_CONFIG_EXTERNC
	
#	include <kstdc/config/cpp.h>
		
#	ifdef __KSTD_CPLUSPLUS__
#		define __KSTD_EXTERNC_BEGIN extern "C" {
#		define __KSTD_EXTERNC_END }
#	else
#		define __KSTD_EXTERNC_BEGIN
#		define __KSTD_EXTERNC_END
#	endif
	
#endif
