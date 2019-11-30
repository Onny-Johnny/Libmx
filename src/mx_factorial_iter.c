#include "libmx.h"

bool checker(int n) {
    if (n < 0)
        return true;
    if (n > 12) 
        return true;
    return false;
}

int mx_factorial_iter(int n) {
    int fact = 1;    
    
    if (n == 0)
        return 1;
    if (checker(n))
        return 0;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
