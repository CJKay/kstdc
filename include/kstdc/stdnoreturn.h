#pragma once
#ifndef KSTDC_STDNORETURN
#	define KSTDC_STDNORETURN

#	include "config/externc.h"
#	include "config/cpp.h"

	__KSTD_EXTERNC_BEGIN

#		if !__KSTDCPP__
#			define noreturn _Noreturn
#		endif

	__KSTD_EXTERNC_END

#endif

