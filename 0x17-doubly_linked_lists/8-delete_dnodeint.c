#include "lists.h"
/**
 * *delete_dnodeint_at_index- function that add node
 * @head: input
 * @index: input
 * @idx
 * Return: num of nodes
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 1 ; index--)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}
	if (ptr == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

	}
	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
