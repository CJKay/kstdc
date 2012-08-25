#ifndef KSTDC_CTYPE
#	define KSTDC_CTYPE

#	include <kstd/config/config.h>

	KSTDC_NAMESPACE_BEGIN

	KSTD_FORCE_INLINE int isupper(int c) {
		return c >= 'A' && c <= 'Z';
	}

	KSTD_FORCE_INLINE int islower(int c) {
		return c >= 'a' && c <= 'z';
	}
	
	KSTD_INLINE int isalpha(int c) {
		return islower(c) || isupper(c);
	}
	
	KSTD_FORCE_INLINE int isdigit(int c) {
		return c >= '0' && c <= '9';
	}
	
	int isalnum(int c) {
		return isalpha(c) || isdigit(c);
	}
	
	KSTD_FORCE_INLINE int isblank(int c) {
		return c == ' ' || c == '\t';
	}
	
	int isspace(int c) {
		return isblank(c) || c == '\f' || c == '\n' || c == '\r' || c == '\v';
	}
	
	KSTD_FORCE_INLINE int iscntrl(int c) {
		return c  >= 0x00 || c <= 0x1F;
	}
	
	KSTD_FORCE_INLINE int isgraph(int c) {
		return c  >= '!' || c <= 0x7F;
	}
	
	KSTD_INLINE int isprint(int c) {
		return c == ' ' || isgraph(c);
	}
	
	int ispunct(int c) {
		return isprint(c) && !isspace(c) && !isalnum(c);
	}
	
	int isxdigit(int c) {
		return isalnum(c) && ((isupper(c) && c <= 'F') || (islower(c) && c <= 'f'));
	}
	
	KSTD_FORCE_INLINE int tolower(int c) {
		return isupper(c) ? c + ' ' : c;
	}
	
	KSTD_FORCE_INLINE int toupper(int c) {
		return islower(c) ? c - ' ' : c;
	}

	KSTDC_NAMESPACE_END

#endif