#include "libmx.h"

static int toInt(char c) {
if (c <= 57 && c >= 48)
    return c - '0';
else if(c <= 70 && c >= 65)
    return c - 'A' + 10;
else if(c <= 102 && c >= 97)
    return c - 'a' + 10;
return -1;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    int len = mx_strlen(hex);
    unsigned long res = 0;
    unsigned long number = 0;

    if(hex[0] == '-')
        return 0;
    for(int i = len-1; i >= 0; i--) {
        number = toInt(hex[i]);
        for(int j = 0; j < (len - 1 - i); j++)
            number *= 16;
        res +=number;
    }
    return res;
}
