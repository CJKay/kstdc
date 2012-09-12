#pragma once
#ifndef KSTDC_CONFIG_NULL
#	define KSTDC_CONFIG_NULL

#	include <kstdc/config/compiler.h>
#	include <kstdc/config/cpp.h>
#	include <kstdc/config/cast.h>
		
#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		if !__KSTD_CPLUSLUS__
#			define NULL __kstd_static_cast(void *, 0)
#		else
#			define NULL 0
#		endif
#	endif

#endif
