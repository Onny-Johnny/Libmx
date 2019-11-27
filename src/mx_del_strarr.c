#include "libmx.h"

void mx_del_strarr(char ***arr) {
   char **tmp = *arr;
   
    while (**arr != 0) {
        tmp = *arr;
        while(*(tmp + 1)) {
            tmp++;
        }
        free(*tmp);
        *tmp = NULL;
    }
    free(*arr);
    *arr = NULL;
}
