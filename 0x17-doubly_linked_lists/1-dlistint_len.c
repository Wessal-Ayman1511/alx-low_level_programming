#include "lists.h"
/**
 * dlistint_len- function that print linked list
 * @h: input
 * Return: num of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const struct dlistint_s *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;

	}
	return (count);
}
