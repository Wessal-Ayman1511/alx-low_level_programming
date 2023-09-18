#include"main.h"
#include<string.h>
/**
* print_rev- function that reverse  string.
*
* @s: input
*
*/
void print_rev(char *s)
{
	int i = 0, len = strlen(s);

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
