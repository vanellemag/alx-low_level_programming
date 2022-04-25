#include "lists.h"
#include <string.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h:listint_t
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
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
