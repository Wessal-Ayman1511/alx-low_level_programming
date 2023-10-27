#include "main.h"
/**
 * clear_bit- function that clears a bit
 * @n: input
 * @index: input
 * Return: bits
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n = *n ^ 1L << index;
	return (1);
}
