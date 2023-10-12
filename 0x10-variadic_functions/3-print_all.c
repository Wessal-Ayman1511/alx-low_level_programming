#include "variadic_functions.h"
/***/
void print_all(const char * const format, ...)
{
	int i, flag;
	char *s;
	va_list ptr;

	va_start(ptr, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			printf("%d", va_arg(ptr, int));
			flag = 0;
		}
		

}
