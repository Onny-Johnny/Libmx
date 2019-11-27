#include "libmx.h"

static char dec_To_Hex(int num) {
    if((num > 9) && (num <= 16)) {
        return num + 87;
    }
    else if((num < 10) && (num >= 0)) {
        return num + 48;
    }
    return -1;
}

char* mx_nbr_to_hex(unsigned long nbr) {
    char len = 0;
    char *str = 0;
    unsigned long num = nbr;
    
    for(; num > 0; num/=16, len++);
    str = (char*) malloc (len + 1);
    for(int i = 0; i < len; i ++) {
        str[len - i - 1] = dec_To_Hex(nbr % 16);
        nbr/=16;
    }
    str[(int)len] = 0;
    return str;
}
