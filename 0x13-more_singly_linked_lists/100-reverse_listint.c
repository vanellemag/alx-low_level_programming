#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverse list
 * @head: list
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	while ((*head) != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = temp2;
	}
	(*head) = temp;
	return (*head);
}
