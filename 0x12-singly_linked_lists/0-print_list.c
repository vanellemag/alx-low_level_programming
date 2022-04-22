#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all elements of list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *t;
	int l, count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			t = h->str;
			l = h->len;
			printf("[%d] %s\n", l, t);
			h = h->next;
			count++;
		}
	}
	return (count);
}
