#include "variadic_functions.h"
/**
 * print_numbers- function that print numbers
 * @separator: input
 * @n: input
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n ; i++)
	{
		if (separator == NULL)
		{
			for (i = 0; i < n ; i++)
				printf("%d", va_arg(ptr, int));
			printf("\n");
		}
		else
		{
			for (i = 1; i <= n; i++)
			{
				if (i == n)
					printf("%d", va_arg(ptr, int));
				else
					printf("%d%s", va_arg(ptr, int), separator);
			}
			printf("\n");
		}
	}
}
