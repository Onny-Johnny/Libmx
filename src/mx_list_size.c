#include "libmx.h"

int mx_list_size(t_list *list) {
    int count = 0;
    
    t_list * tmp = list;
    while (tmp) {
        tmp = tmp->next;
        count++;
    }
    return count;
}
