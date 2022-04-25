
#include "lists.h"
#include <string.h>
/**
 * print_listint - prints number all the elements of h
 * @h: linked list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
