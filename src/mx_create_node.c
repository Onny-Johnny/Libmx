#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *newNode = (t_list*) malloc (sizeof(t_list*));
    newNode->data = data;
    newNode->next = 0;
    return newNode;
}
