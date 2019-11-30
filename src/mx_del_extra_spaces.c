#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
	if (str) {
		char *res = mx_strnew(mx_strlen(str));
		int j = 0;
		char *tmp;

		for (int i = 0; str[i]; i++) {
			if (!(mx_isspace(str[i]))) {
				res[j] = str[i];
				j++;
			}
			if (!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
				res[j] = ' ';
				j++;
			}
		}
		tmp = mx_strtrim(res);
		free(res);
		if (tmp == NULL)
			return mx_strnew(0);
		return tmp;
	}
	return NULL;
}
