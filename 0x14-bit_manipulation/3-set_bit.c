#include "main.h"
/**
 * set_bit- function that set bits
 * @n: input
 * @index: input
 * Return: bits
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	else
		return (!!(*n = *n | 1L << index));
}
