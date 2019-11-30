#include "libmx.h"

int num_len(int number) {
    int count = 0;
    long num = number;

    if (num == 0) {
        count++;
    }else if (num < 0) {
        count++;
        num = -num;
        while (num != 0) {
            count++;
            num /= 10;
        }
    } else {
        while (num != 0) {
            count++;
            num /= 10;
        }
    }
    return count;
}

char *num_ret(int number) {
    char *c = malloc(num_len(number));
    long num = number;
    int i = 0;

    if (num == 0) {
        c[i] = '0';
    }
    if (num < 0) {
        num = -num;
        c[num_len(number) - 1] = '-';
    }
   
    while (num != 0) {
        c[i] = (num % 10) + '0';
        num /= 10;
        i++;
    }
    return c;
}

char *mx_itoa(int number) {
    char *c =  malloc(num_len(number));
    char *c1 = malloc(num_len(number));
    int i = 0;
    c = num_ret( number);

    for (int j = num_len(number) - 1; i < num_len(number); i++, j--)
        c1[i] = c[j];
    free(c);
    c = NULL;
    c1[i] = '\0';
    return c1;
}
