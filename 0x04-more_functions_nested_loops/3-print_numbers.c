#include"main.h"

/**
* print_numbers - print numbers using _putchar
*
*/
void print_numbers(void);
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
