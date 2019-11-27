#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *s3 = (char*)malloc(mx_strlen(s1) + mx_strlen(s2));
    
    if ((s1 == 0) && (s2 == 0))
        return 0;
    
    if (s1 == 0) 
        mx_strcpy(s3,s2);
    else if (s2 == 0) 
        mx_strcpy(s3,s1);
    else {
        mx_strcpy(s3,s1);
        mx_strcat(s3,s2);
    }
    return s3;
}
