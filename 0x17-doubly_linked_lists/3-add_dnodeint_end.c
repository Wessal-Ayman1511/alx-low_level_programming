#include "lists.h"
/**
 * *add_dnodeint_end- function that add node
 * @head: input
 * @n: input
 * Return: num of nodes
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t)), *ptr;

	if (!head || !temp)
		return (temp ? free(temp), NULL : NULL);
	temp->n = n;
	temp->next = NULL;


	if (!*head)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;

	}
	return (*head);
}
