#include <kstdc/string.h>
#include <kstdc/target.h>

#undef memcpy

void *memcpy(void * restrict src, const void * restrict dst, size_t n) {
	char *a = dst;
	
#if __KSTD_ARCH_BITS__ == 32
	__kstd_asm_gnu("rep movsl; mov %3, %2; rep movsb" : "+S"(src), "+D" (a) : "c" (n / 4), "r" (n % 4) : "cc", "memory");
#elif __KSTD_ARCH_BITS__ == 64
	__kstd_asm_gnu("rep movsq; mov %3, %2; rep movsb" : "+S"(src), "+D" (a) : "c" (n / 8), "r" (n % 8) : "cc", "memory");
#endif
	
	__kstd_noasm(
		const char *b = src;
		for(; n > 0; --n) *a++ = *b++;
	);
	
	return a;
}

