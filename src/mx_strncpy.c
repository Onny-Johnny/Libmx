#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
	if (mx_strlen(src) < len) {
		dst = mx_strcpy(dst, src);
		return dst;
	}
	dst = mx_memcpy(dst, src, len);
	return dst;
}
