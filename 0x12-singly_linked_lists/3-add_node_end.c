#include "lists.h"
#include <stddef.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of list
 * @head: list_t
 * @str: char
 * Return: adress of the new element or Null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **new = head;

	while (new != NULL)
	{
		*new = (*new)->next;
	}
	((*new)->str) = strdup(str);
	((*new)->len) = strlen(str);
	(*new)->next = NULL;
	if (new == NULL)
		return (NULL);
	return (*new);
}
