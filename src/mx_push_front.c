#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
    t_list *newNode = mx_create_node(data);
    t_list *tmp = 0;
    if (*list == 0) {
        *list = newNode;
    }
    else {
        tmp = *list;
        *list = newNode;
        newNode->next = tmp;
    }
}
