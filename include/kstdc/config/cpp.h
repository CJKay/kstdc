#pragma once
#ifndef __KSTDC_CONFIG_CPP_H__
#	define __KSTDC_CONFIG_CPP_H__

#ifdef __KSTD_DOXYGEN__
#	define __KSTD_NOCPLUSPLUS__ //!< User-definable macro that forces use of only libkstdc when using C++.
#endif

#	define __KSTDC__ 1 //!< libkstdc identifier.
#	define __KSTDCPP__ (!__KSTD_NOCPLUSPLUS__ && defined(__cplusplus)) //!< libkstdcpp identifier.

#endif
