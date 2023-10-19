#include "lists.h"
/***/
size_t list_len(const list_t *h)
{
	size_t i = 1;

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
