#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *newNode = mx_create_node(data);
    t_list *tmp = *list;
    if (*list == 0) {
        *list = newNode;
    }
    else {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = newNode;
    }
}
