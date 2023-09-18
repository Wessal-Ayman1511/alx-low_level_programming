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

	for (i = len / 2 ; i < len ; i++)
		_puchaar(str[i]);
}
