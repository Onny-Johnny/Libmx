#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    char **str = (char **)malloc(sizeof(char**) * mx_count_words(s,c) + 1);
    int st = 0;
    int ed = 0;
    int wd = 0;

    if (s == 0)
        return 0;
    while (s[st]) {
        while (s[st] == c)
            st++;
        ed = st;
        while ((s[ed] != c) && (s[ed] != 0))
            ed++;
        if (st == ed)
            break;
        str[wd] = (char*) malloc (ed - st + 1);
        mx_strncpy(str[wd], &s[st],ed - st);
        wd++;
        st = ed;
    }
    str[wd] = 0;
    return str;
}
