#include "variadic_functions.h"
/**
 * sum_them_all- function that sum all args
 * @n: no.of inputs
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list ptr;
	int i, sum = 0;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
