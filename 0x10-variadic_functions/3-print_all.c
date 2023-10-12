#include "variadic_functions.h"

/**
 * print_all- function that print
 * @format: iinput
 * Return: print
*/
void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *st;
	va_list ptr;

	va_start(ptr, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
			{
				printf("%d", va_arg(ptr, int));
				flag = 0;
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(ptr, double));
				flag = 0;
				break;
			}
			case 'c':
			{
				printf("%c", va_arg(ptr, int));
				flag = 0;
				break;
			}
			case 's':
			{
				st = va_arg(ptr, char *);
				if (st == NULL)
					st = "(nil)";
				printf("%s", st);
				break;
			}
			default:
			{
				flag = 1;
				break;
			}
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
