#include "main.h"
/**
 * **alloc_grid- function allocategrid with zeros
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	char **p = calloc((width * height), sizeof(int));

	if (p == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
		return (**p);
}
