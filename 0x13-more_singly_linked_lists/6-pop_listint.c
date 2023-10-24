#include "lists.h"
/**
 * pop_listint- function that delete first node
 * @head: input
 * Return: n-data
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;
	if (!*head || !head)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		n = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
