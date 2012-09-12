#pragma once
#ifndef KSTDC_STDNORETURN
#	define KSTDC_STDNORETURN

#	include <kstdc/config/config.h>

	__KSTD_EXTERNC_BEGIN

#		ifndef __KSTD_CPLUSPLUS__
#			define noreturn _Noreturn
#		endif

	__KSTD_EXTERNC_END

#endif

