#include "lists.h"
/**
 * *insert_dnodeint_at_index- function that add node
 * @h: input
 * @n: input
 * @idx: input
 * @idx
 * Return: num of nodes
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *ptr, *tmp;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	ptr = *h;
	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}
	if (ptr->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = ptr;
	tmp->next = ptr->next;
	ptr->next->prev = tmp;
	ptr->next = tmp;

	return (NULL);
}
