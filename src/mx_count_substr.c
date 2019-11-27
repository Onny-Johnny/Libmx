#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	int what_len = mx_strlen(sub);
	int count = 0;
	char *where = (char*)str;

	if (what_len) {
   		while ((where = mx_strstr(where, sub))) {
        	where += what_len;
        	count++;
    	}
 	}
 	return count;
}
