#include "libmx.h"

void mx_pop_front(t_list **head) {
	t_list *current = NULL;
	if (head && *head) {
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
