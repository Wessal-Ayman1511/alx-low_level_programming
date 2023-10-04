#include "main.h"
/**
 * **alloc_grid- function allocategrid with zeros
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	p = malloc(height *  sizeof(*p));
	if (p == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height ; i++)
		{
			p[i] = malloc(width *  sizeof(**p));
			if (p[i] == 0)
			{
				while (i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
			for (j = 0 ; j < width ; j++)
			{
				p[i][j] = 0;
			}
		}
	}
	return (p);
}
