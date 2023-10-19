#include "lists.h"
/**
 * *add_node- function that add node in linked list
 * @head: input
 * @str: input
 * Return: linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (!h || !head)
		return (NULL);
	while (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (NULL);
		}
		h->len = strlen(h->str);
	}
	h->next = *head;
	*head = h;
	return (h);
}
