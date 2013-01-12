#pragma once
#ifndef __KSTDC_CONFIG_NULL_H__
#	define __KSTDC_CONFIG_NULL_H__

#	include "compiler.h"
#	include "cpp.h"
#	include "cast.h"

#	if __KSTDCPP__
#		define __KSTD_NULL__ 0
#	else
#		define __KSTD_NULL__ __kstd_static_cast(void *, 0)
#	endif

#endif
