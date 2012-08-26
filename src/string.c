#include <kstdc/string.h>

#undef memcpy

void *memcpy(void * restrict src, const void * restrict dst, size_t n) {
	char *a = dst;
	__kstd_asm_gnu("rep movsl; mov %3, %2; rep movsb" : "+S"(src), "+D"(a) : "c"(n / 4), "r"(n % 4) : "cc", "m");
	__kstd_asm_alternative(
		const char *b = src;
		for(; n > 0; --n) *a++ = *b++;
	);
	
	return a;
}

