#include "libmx.h"

void mx_pop_back(t_list **head) {
    if (*head == 0) return;
    t_list ** tmp = head;
    while ((*tmp)->next) {
        tmp = &((*tmp)->next);
    }
    free(*tmp);
    *tmp = 0;
}
