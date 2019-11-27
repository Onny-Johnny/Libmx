#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
        for (int i = 0; i < (int) n; i++)
                if(((char *)s)[i] == c)
                        return ((char *)s + i);
        return (NULL);
}
