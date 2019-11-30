#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int i = 0;
    int j = 0;

    if ((str == 0) || (sub == 0))
        return -2;                //ERROR
    if (mx_strlen(sub) == 0)
        return 0;                 //EMPTY STR
    while (str[i]) {
        j = i;
        while (str[j] == sub[j - i]) {
            if (sub[j - i + 1] == 0)
                return i;
            j++;
        }
        i++;
    }
    return -1;                    //NOT FIND
}
