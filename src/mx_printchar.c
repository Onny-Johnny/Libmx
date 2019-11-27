#include "libmx.h"

void mx_printchar(char c) {
	char *d = &c;
	
	write(1, d, 1);
}
