#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
