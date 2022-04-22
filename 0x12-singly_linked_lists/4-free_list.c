#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: list_t
 *
*/
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
