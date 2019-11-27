#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *dst_ = (unsigned char*) dst;
    unsigned char *src_ = (unsigned char*) src;
    
    for (size_t i = 0; i < n; i++) {
        dst_[i] = src_[i];
    }
    return dst;
}
