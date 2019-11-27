#include "libmx.h"

void mx_str_reverse(char *s) {
    int len = 0;
    char tmp = 0;

    if(s == 0)
    	return;
    len = mx_strlen(s);
    for (int i = 0; i < len / 2; i ++) {
        tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}
