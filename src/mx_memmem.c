#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned char * big_ = (unsigned char* ) big;
    unsigned char * little_ = (unsigned char* ) little;
    char isFinded = 1;
    
    for (size_t i = 0; i < big_len; i++) {
        isFinded = 1;
        for (size_t j = 0; j < little_len; j++) {
            if (i + j >= big_len)
                return 0;
            if (big_[i+j] != little_[j]) {
                isFinded = 0;
                break;
            }
        }
        if (isFinded == 1)
            return &big_[i];
    }
    return 0;
}
