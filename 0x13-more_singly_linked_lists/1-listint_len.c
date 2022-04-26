#include "lists.h"
#include <string.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h:listint_t
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
