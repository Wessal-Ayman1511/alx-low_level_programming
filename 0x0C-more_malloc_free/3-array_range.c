#include "main.h"
/**
 * *array_range- function that create array of integers
 * @min: input
 * @max: input
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0 ; i < l ; i++)
		p[i] = min++;
	return (p);
}
