#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * free_listint2 - frees a list
 * @head: listint_t
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	if (*head == NULL)
		return (*head);
	while (curr != NULL)
	{
		listint_t *pt = curr;

		curr = curr->next;
		free(pt);
	}
	(*head) = NULL;
}
