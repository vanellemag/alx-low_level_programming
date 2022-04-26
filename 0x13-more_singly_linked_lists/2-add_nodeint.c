#include "lists.h"
#include <stddef.h>
#include <string.h>
/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: list
 *@n: int
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);

}
