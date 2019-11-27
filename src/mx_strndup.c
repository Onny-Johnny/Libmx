#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t len = (size_t)mx_strlen(s1);

    if (s1 == 0)
        return 0;
    if (len < n) {
        char *newStr = mx_strnew(len);
        if(newStr == 0)
            return 0;
        mx_strcpy(newStr, s1);
        return newStr;
    } 
    else {
        char *newStr = mx_strnew(n);
        if(newStr == 0)
            return 0;
        for(size_t i = 0; i < n; i++) {
            newStr[i] = s1[i];
        }
        return newStr;
    }
}
