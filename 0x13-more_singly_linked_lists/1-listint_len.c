#include "lists.h"
/**
 * listint_len- function that calc num of nodes
 * @h: input
 * Return: num
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
