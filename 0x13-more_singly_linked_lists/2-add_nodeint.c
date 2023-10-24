#include "lists.h"
/**
 * *add_nodeint- function that add node in linked list
 * @head: input
 * @n: input
 * Return: linked list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = malloc(sizeof(listint_t));

	if (!h || !head)
		return (NULL);
	if (n)
	{
		h->n = n;
		if (!h->n)
		{
			free(h);
			return (NULL);
		}
	}
	h->next = *head;
	*head = h;
	return (h);
}
