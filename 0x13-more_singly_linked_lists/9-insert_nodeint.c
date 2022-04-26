#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: listint_t
 * @idx: int
 * @n: int
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *next, *new;
	listint_t *prev;
	unsigned int  len, i = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	next = (listint_t *)malloc(sizeof(listint_t));
	prev = (listint_t *)malloc(sizeof(listint_t));
	next = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	len = listint_len(*head);
	while ((i <= len) && (next != NULL))
	{
		prev = next;
		next = next->next;
		if (idx == i)
		{
			prev = new;
			new->next = next;
		}
		i++;
	}
	return (new);
}
