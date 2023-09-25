#include"main.h"
#include<string.h>
/**
*print_diagsums- function that print sum of diagonals
*
* @size: input
*
* @a: input
*/
void print_diagsums(int *a, int size)
{
	int sumr = 0, suml = 0, i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				suml += a[i][j];
			if (i + j == size - 1)
				sumr += a[i][j];
		}
	}
	printf("%d, %d\n", suml, sumr);
}

