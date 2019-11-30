#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	size_t i = 0;

	if (n == 0)
		return NULL;
	while (i < n) {
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c) {
			return (void *)&(((unsigned char *)dst)[i + 1]);
		}
		i++;
	}
	return NULL;
}
