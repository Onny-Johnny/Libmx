#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *dst_ = (unsigned char*) dst;
    unsigned char *src_ = (unsigned char*) src;
    size_t i = 0;
    
    for (i = 0; i < n; i++) {
        if (src_[i] == c) break;
        dst_[i] = src_[i];
    }
    return &dst_[i];
}
