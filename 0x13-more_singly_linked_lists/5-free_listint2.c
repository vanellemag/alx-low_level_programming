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
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
