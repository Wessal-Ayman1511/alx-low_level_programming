#include"main.h"

/**
* print_sign - function to print sign
*
* @n: chack imput of function
*
* Return: return 1 if 'n' is greater than 0
*         return -1 if 'n' is less than 0
*         other return 0 (success)
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
