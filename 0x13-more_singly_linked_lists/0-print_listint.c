#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_listint - prints number all the elements of h
 * @h: linked list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
