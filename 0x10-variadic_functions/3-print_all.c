#include "variadic_functions.h"
/**
 * print_all- function that print
 * @format: iinput
 * Return: print
*/
void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *s;
	va_list ptr;

	va_start(ptr, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			printf("%d", va_arg(ptr, int));
			flag = 0;
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(ptr, double));
			flag = 0;
		}
		if (format[i] == 'c')
		{
			printf("%c", va_arg(ptr, int));
			flag = 0;
		}
		if (format[i] == 's')
		{
			s = va_arg(ptr, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}
		if (format[i] != 'i' && format[i] != 'f' &&
		format[i] != 'c' && format[i] != 's')
		{
			flag = 1;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
