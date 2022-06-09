#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of list
 * @h: double listint
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t lenght = 0;

	while (h->next)
	{
		printf("%d", h->n);
		lenght++;
	}
	return (lenght);
}
