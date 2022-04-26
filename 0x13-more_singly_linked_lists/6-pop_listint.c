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
	listint_t *pt = *head;

	if (*head == NULL)
		return (0);
	n = pt->n;
	(*head) = (*head)->next;
	free(pt);
	return (n);
}
