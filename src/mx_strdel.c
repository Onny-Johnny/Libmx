#include "libmx.h"

void mx_strdel(char **str) {
    int countr = 0;

    if (str != NULL) {
       while (str[countr] != '\0')
           countr++;
       for (int i = 0; i < countr / 2; i++) {
	        str[i] = NULL;
           free(str[i]);
       }
        str = NULL;
        free(str);
    }
}
