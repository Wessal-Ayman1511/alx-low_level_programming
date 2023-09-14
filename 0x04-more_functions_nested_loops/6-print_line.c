#include"main.h"

/**
* print_line - print lines using _putchar
*
* @n: input
*
*/
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n ; i++)
			_putchar('_');
	}
	 _putchar('\n');
}
