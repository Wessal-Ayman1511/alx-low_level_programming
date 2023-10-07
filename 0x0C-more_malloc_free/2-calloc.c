#include "main.h"
/**
 * *_calloc- funcrion that allocates memory for an array
 * @nmemb:input
 * @size: input
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	len = nmemb * size;
	p = malloc(len);

	if (p == 0)
	{
		return (NULL);
	}
	for (; i < l ; i++)
		p[i] = 0;
	return (p);
}
