#include"main.h"

/**
* print_diagonal - print diagonal using _putchar
*
* @n: input
*
*/
void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
				_putchar(92);
				_putchar('\n');
		}
	}
	_putchar('\n');
}
