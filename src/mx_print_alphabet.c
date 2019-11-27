#include "libmx.h"

void mx_print_alphabet(void) {
	for(char i = 65; i <= 90; i += 2) {
		mx_printchar(i);
		mx_printchar(i + 33);
	}
	mx_printchar('\n');
}
