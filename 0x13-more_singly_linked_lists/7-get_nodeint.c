#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: listint_t
 * @index: int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, i = 0;
	listint_t *pt2 = head;

	len = listint_len(head);
	if (head == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		if (i != index)
		{
			head = head->next;
			pt2 = head;
		}
		i++;
	}
	return (pt2);
}
