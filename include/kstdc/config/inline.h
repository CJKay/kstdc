#pragma once
#ifndef __KSTDC_CONFIG_INLINE_H__
#	define __KSTDC_CONFIG_INLINE_H__

#	include "compiler.h"

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		define __KSTD_FORCE_INLINE __attribute__((always_inline)) inline
#	else
#		define __KSTD_FORCE_INLINE
#		warning "No way to force inline on this compiler."
#	endif

#endif
