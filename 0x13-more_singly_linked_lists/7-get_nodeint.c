#include "lists.h"
/**
 * *get_nodeint_at_index- function that returns the nth node
 * @head: input
 * @index: input
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int c = 0;

	if (!head)
		return (NULL);
	ptr = head;
	while (c < index)
	{
		ptr = ptr->next;
		c++;
	}
	return (ptr);
}
