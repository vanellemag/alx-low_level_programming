#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node - adds a new node
 * @head: list_t
 * @str: char
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t **new;
	new = (list_t **)malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);
	((*new)->str) = strdup(str);
	((*new)->next) = *head;
	head = new;
	return (*head);
}
