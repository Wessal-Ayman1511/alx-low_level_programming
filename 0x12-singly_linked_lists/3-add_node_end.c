#include "lists.h"
/**
 * *add_node_end- function that add node in linked list
 * @head: input
 * @str: input
 * Return: linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));
	list_t *x = *head;

	if (!h || !head)
		return (NULL);
	if (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (NULL);
		}
		h->len = strlen(h->str);
	}
	if (x)
	{
		while (x->next)
			x = x->next;
		x->next = h;
	}
	else
		*head = h;
	return (h);
}
