#include "libmx.h"

int mx_sqrt(int x) {
    for(int i = 0; i < 46341; i++) {
    	if(i * i > x)
    		return 0;
        if(i * i == x)
        	return i;
    }
    return 0;
}
