#include "main.h"
/**
 * *_calloc- funcrion that allocates memory for an array
 * @nmemb:input
 * @size: input
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (NULL);
	}
	for (; i < nmemb ; i++)
		p[i] = 0;
	return (p);
}
