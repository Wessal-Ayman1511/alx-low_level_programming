#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that create array
 * @c: input
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr =  malloc(size);

	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}

