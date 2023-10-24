#include "lists.h"
/**
 * *add_nodeint_end- function that add node in linked list
 * @head: input
 * @n: input
 * Return: linked list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = malloc(sizeof(listint_t));
	listint_t *ptr;

	h->n = n;
	h->next = NULL;

	if (!h || !head)
		return (NULL);
	if (!*head)
		*head = h;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = h;
		return (h);
	}
	return (h);
}
