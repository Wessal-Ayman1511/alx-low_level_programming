#include "lists.h"
/**
 * print_dlistint- function that print linked list
 * @h: input
 * Return: num of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const struct dlistint_s *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;

	}
	return (count);
}
