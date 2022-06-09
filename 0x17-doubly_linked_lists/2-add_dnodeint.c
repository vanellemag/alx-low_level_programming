#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: double linked list
 * @n: int
 * Return: double linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(new));

	if (head != NULL)
	{
		if (new != NULL)
		{
			new->n = n;
			new->prev = NULL;
			if ((*head)->next == NULL)
			{
				new->next = *head;
				(*head)->prev = new;
				(*head)->next = NULL;
			}
			else
			{
				(*head)->prev = new;
				new->next = (*head)->prev;
			}
		}
	}
	return (new);
}
