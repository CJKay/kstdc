#pragma once
#ifndef __KSTDC_CONFIG_SIZETYPE_H__
#	define __KSTDC_CONFIG_SIZETYPE_H__

#	include "externc.h"
#	include "compiler.h"
	
	__KSTD_EXTERNC_BEGIN
	
#		if (__KSTD_COMPILER__ == gcc) || (__KSTD_COMPILER__ == clang)
			typedef __SIZE_TYPE__ __KSTD_SIZE_TYPE__;
#		else
#			error "No way to implement size_t on this compiler."
#		endif
	
	__KSTD_EXTERNC_BEGIN

#endif
