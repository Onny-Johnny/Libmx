#include "libmx.h"

char *mx_strnew(const int size) {
    char *str;

    if (size < 0)
    	return 0;
	str =(char*) malloc ((sizeof(char))*(size + 1));
    if (str == 0)
    	return 0;
    for (int i = 0; i < size; i++) {
        str[i] = 0;
    }
    str[size] = 0;
    return str;
}
