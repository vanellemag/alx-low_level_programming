#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: list pointer
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *pt;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	pt = (*head)->next;
	free(*head);
	*head = pt;
	return (n);
}
