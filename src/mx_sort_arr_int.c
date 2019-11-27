#include "libmx.h"

void mx_sort_arr_int(int *arr, int size) {
    int p;

    for (int i = 1;i < size; i++) {
        for (int k = 0; k < size - i; k++) {
            if (arr[k] > arr[k+1]) {
                p = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = p;
            }
        }
    }
}
