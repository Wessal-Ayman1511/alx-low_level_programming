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
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
