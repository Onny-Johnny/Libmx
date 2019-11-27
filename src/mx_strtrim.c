#include "libmx.h"

static char isspace_(char c) {
    if (((c <= 13) && (c >=9)) || (c == ' ')) 
        return 1;
    return 0;
}

char *mx_strtrim(const char *str) {
    char *newStr = 0;
    int startTr = 0;
    int endTr = 0;
    int i = 0;
    int len = mx_strlen(str);
    
    while(isspace_(str[i]) == 1) {
        i++;
        startTr++;
    }
    i = len - 1;
    while(isspace_(str[i]) == 1) {
        i--;
        endTr++;
    }
    newStr = (char*) malloc (sizeof(char) * len + 1 - startTr - endTr);
    newStr = mx_strncpy(newStr, &str[startTr], len - startTr - endTr);
    return newStr;
}
