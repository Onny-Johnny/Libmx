#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *pd = dst;
    const unsigned char *ps = src;
    
    if (ps < pd != 0)
        for (pd += len, ps += len; len--;)
            *--pd = *--ps;
    else
        while(len--)
            *pd++ = *ps++;
    return dst;
}
