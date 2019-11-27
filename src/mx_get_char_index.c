#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int index = 0;
    
    if (str == 0)
    	return -2;
    while (*str) {
        if (*str == c)
        	return index;
        index++;
        str++;
    }
    return -1;
}
int main(){
char *str4 = "dont read my commits";
    char s = 'r';
    char s1 = 'd';
    char s2 = 'c';
    printf("%d\n", mx_get_char_index(str4, s));
    printf("%d\n", mx_get_char_index(str4, s1));
    printf("%d\n", mx_get_char_index(str4, s2));
    return 0;
}
