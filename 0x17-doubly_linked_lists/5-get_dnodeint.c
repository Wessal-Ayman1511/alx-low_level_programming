#include "lists.h"
/**
 * *get_dnodeint_at_index- function that add node
 * @head: input
 * @index: input
 * Return: dsta in node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	if (!head || !ptr)
		return (ptr ? free(ptr), NULL : NULL);
	if (index == 0)
	{
		return (head);
	}
	else
	{
		while (index != 0)
		{
			ptr = ptr->next;
			index--;
		}
		return (ptr);
	}
	return (NULL);
}
