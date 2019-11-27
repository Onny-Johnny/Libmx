#include "libmx.h"

char *mx_strdup(const char *str) {
    char *newStr = mx_strnew(mx_strlen(str));

    if(newStr == 0)
    	return 0;
    mx_strcpy(newStr, str);
    return newStr;
}
