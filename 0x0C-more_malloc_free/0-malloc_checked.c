#include "main.h"
/**
 * *malloc_checked- function that allocates memory using malloc.
 * @b: input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
