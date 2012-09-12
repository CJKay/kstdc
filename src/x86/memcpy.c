#include "../../include/kstdc/string.h"
#include "../../include/kstdc/config/asm.h"

#undef memcpy

void *memcpy(void * restrict s1, const void * restrict s2, size_t n) {
	void *ret = s1;

#if __KSTD_ARCH_BITS__ == 32
	__kstd_gnuasm("rep movsl; mov %3, %2; rep movsb" : "+S"(s2), "+D" (s1) : "c" (n / 4), "r" (n % 4) : "cc", "memory");
#elif __KSTD_ARCH_BITS__ == 64
	__kstd_gnuasm("rep movsq; mov %3, %2; rep movsb" : "+S"(s2), "+D" (s1) : "c" (n / 8), "r" (n % 8) : "cc", "memory");
#endif
	
	__kstd_noasm(
		for(; n > 0; --n) *s1++ = *s2++;
	);
	
	return ret;
}

