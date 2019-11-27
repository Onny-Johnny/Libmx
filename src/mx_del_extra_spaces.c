#include "libmx.h"

static char isspace_(char c) {
    if (((c <= 13) && (c >=9)) || (c == ' ')) 
       return 1;
    return 0;
 }

char *mx_del_extra_spaces(const char *str) {
    char *trimmedStr = mx_strtrim(str);
    char *newStr = 0;
    int i = 0;       
    int j = 0;
    
    while (trimmedStr[i] != 0) {
    while (!isspace_(trimmedStr[i])) {
        i++;
    }
    trimmedStr[i] = ' ';
    i++;
    j = i;
    while (isspace_(trimmedStr[j])) {
        j++;
        }
    mx_strcpy(&trimmedStr[i], &trimmedStr[j]);
    }
    newStr = (char *) malloc (sizeof(char) * mx_strlen(trimmedStr));
    mx_strcpy(newStr, trimmedStr);
    free(trimmedStr);
    return newStr;
}
