#ifndef KSTDC_STDALIGN
#	define KSTDC_STDALIGN
	
#	include <kstdc/config/config.h>

	__KSTD_EXTERNC_BEGIN
	
#		ifndef __KSTD_CPLUSPLUS__
#			define alignas					_Alignas
#			define alignof					_Alignof
#			define __alignas_is_defined		1
#			define __alignof_is_defined		1
#		else
#			define __alignas_is_defined		0
#			define __alignof_is_defined		0
#		endif

	__KSTD_EXTERNC_END

#endif
