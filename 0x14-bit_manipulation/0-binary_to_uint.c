#include "main.h"
/**
 * binary_to_uint- function convert to decimal
 * @b: input
 * Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal * 2 + (*b - '0');
		b++;
	}
	return (decimal);
}
