#include"main.h"
#include<string.h>
/**
* puts2- function that prints every other character of a string
*
* @str: input
*
*/
void puts2(char *str)
{
	int i = 0, len = strlen(str);

	for (i = 0  ; i < len  ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
