#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *s1_ = (unsigned char*) s1;
    unsigned char *s2_ = (unsigned char*) s2;
    
    for (size_t i = 0; i < n; i++) {
        if (s1_[i] != s2_[i])
        	return s1_[i] - s2_[i];
    }
    return 0;
}
