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
	int i = 0, len = strlen(str);

	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i += 1;
	}
	else
	{
		i = len / 2;
	}
	for (; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

