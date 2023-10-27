#include "main.h"
/**
 * print_binary- function that convert to binary
 * @n: input
 * Return: converted number
*/
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(n) * 8;
	int flag = 0;

	while (num_bits)
	{
		if (n & 1L << --num_bits)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (!flag)
		_putchar('0');
}
