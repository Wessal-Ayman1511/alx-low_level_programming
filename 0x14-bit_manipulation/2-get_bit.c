#include "main.h"
/**
 * get_bit- function that get bit
 * @n: input
 * @index: input
 * Return: bits
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	else
		return (n >> index & 1);
}
