#include "main.h"
/**
 * get_endianness- function that checks the endianness.
 * Return: int
*/
int get_endianness(void)
{
	unsigned int x = 1;

	return ((*(char *)&x));
}
