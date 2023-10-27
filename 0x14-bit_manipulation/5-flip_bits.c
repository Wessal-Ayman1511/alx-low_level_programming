#include "main.h"
/**
 * flip_bits- function that flip bits
 * @n: input
 * @m: input
 * Return: bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor)
	{
		if (xor & 1ul)
			i++;
		xor >>= 1;
	}
	return (i);
}
