#include "main.h"
/**
 * free_grid- function that free grid
 * @grid: input
 * @height: input
 * return: pointer
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
