#include "lists.h"
#include <stddef.h>
#include <string.h>
/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: listint_t
 * @n: int
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;

	end = (listint_t *)malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while ((*head) != NULL)
		{
			(*head) = (*head)->next;
		}
		(*head)->next = end;
	}
	return (*head);
}

