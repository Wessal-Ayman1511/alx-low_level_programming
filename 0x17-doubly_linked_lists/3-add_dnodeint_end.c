#include "lists.h"
/**
 * *add_dnodeint- function that add node
 * @head: input
 * @n: input
 * Return: num of nodes
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (!head || !ptr)
		return (ptr ? free(ptr), NULL : NULL);
	ptr->n = n;
	ptr->prev = NULL;

	if (!*head)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
