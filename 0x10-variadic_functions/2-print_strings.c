#include "variadic_functions.h"
/**
 * print_strings- function that print string
 * @n: input
 * @separator: input
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int count = n;
	char *s;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	while (count--)
	{
		printf("%s%s", (s = va_arg(ptr, char *)) ? s : "(nil)",
				count ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}
