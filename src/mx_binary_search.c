#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int start = 0;
    int end = size -1;
    int m = (start + end) / 2;

    *count = 0;
    while (start <= end) {
        (*count)++;
        m = (start + end) / 2;
        if(mx_strcmp(arr[m], s) < 0) {
            start = m + 1;
        }
        else if(mx_strcmp(arr[m], s) > 0) {
            end = m - 1;
        }
        else return m;
    } 
    *count = 0;
    return -1;
}
