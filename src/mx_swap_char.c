#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
    char tmp = *s1;

    if ((s1 == 0) || (s2 == 0))
    	return;
    *s1 = *s2;
    *s2 = tmp;
}
