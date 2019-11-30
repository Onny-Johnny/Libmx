#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	char *new;

	if (s1 || s2) {
		if (!s2)
			return mx_strdup(s1);
		else if (!s1)
			return mx_strdup(s2);
		else if (s1 && s2) {
			new = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
			new = mx_strcat(mx_strcpy(new, s1), s2);
			return new;
		}
	}
	return NULL;
}
