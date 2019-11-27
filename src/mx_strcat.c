#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    char *tmp = s1;
    
    while (*++tmp);
    while (*s2) {
        *tmp++ = *s2++;
    }
    *tmp = 0;
    return s1;
}
