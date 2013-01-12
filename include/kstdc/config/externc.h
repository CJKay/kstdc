#pragma once
#ifndef __KSTDC_CONFIG_EXTERNC_H__
#	define __KSTDC_CONFIG_EXTERNC_H__
	
#	include "cpp.h"
		
#	if __KSTDCPP__
#		define __KSTD_EXTERNC_BEGIN extern "C" {
#		define __KSTD_EXTERNC_END }
#	else
#		define __KSTD_EXTERNC_BEGIN
#		define __KSTD_EXTERNC_END
#	endif
	
#endif
