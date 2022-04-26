#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * free_listint - frees a list
 * @head: listint_t
 *
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
