#include "lists.h"
/**
 * *get_nodeint_at_index- function that returns the nth node
 * @head: input
 * @index: input
 * Return: void
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int c = 0;

	if (!head)
		return (NULL);
	while (c < index)
	{
		c++;
		ptr = ptr->next;
	}
	return (ptr);
}
