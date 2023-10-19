#include "lists.h"
/**
* _len - function that returns the length of a string.
*
* @s: input
*
* Return: return( _strlen)
*
*/
int _len(char *s)
{
	int c = 0;

	if (!s)
		return (0);
	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
/**
 * print_list- function that print list
 * @h: input
 * Return: number
*/
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("[%d] %s/n", _len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		c++;
	}
	return (c);
}
