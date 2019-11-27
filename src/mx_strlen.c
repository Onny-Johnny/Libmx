#include "libmx.h"

int mx_strlen(const char *s) {
    int len = 0;

    if (s == 0)
    	return 0;
    while (s[len]) {
        len++;
    }
    return len;
}
