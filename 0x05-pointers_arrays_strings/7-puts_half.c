#include"main.h"
#include<string.h>
/**
* puts_half-  function that prints half of a string
*
* @str: input
*
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		;

	for (i /= 2; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
