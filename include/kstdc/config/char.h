#pragma once
#ifndef __KSTDC_CONFIG_CHAR_H__
#	define __KSTDC_CONFIG_CHAR_H__

#	include "compiler.h"

/*!
 * @def __KSTD_CHAR_UNSIGNED__
 * 1 if the compiler defines the char type to be unsigned, 0 otherwise.
 */

#	if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
#		define __KSTD_CHAR_UNSIGNED__ defined(__CHAR_UNSIGNED__) //!< POD char type signedness.
#	else
#		error "No way to test for unsigned char on this compiler."
#	endif

#endif
