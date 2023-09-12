#include"main.h"

/**
* print_last_digit  - function to print last digit
*
* @n: chack imput of function
*
* Return: return 0 always  (success)
*
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = (n % 10)

	_putchar(x + '0');
	return (x);
}

