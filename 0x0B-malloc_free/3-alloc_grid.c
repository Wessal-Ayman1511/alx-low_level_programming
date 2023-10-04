#include "main.h"
/**
 * **alloc_grid- function allocategrid with zeros
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **p = malloc((width * height) *  sizeof(int));

	if (p == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
		free(p);
	}
	else
	{
		int i, j;

		for (i = 0 ; i < width ; i++)
		{
			for (j = 0 ; j < height ; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
}
