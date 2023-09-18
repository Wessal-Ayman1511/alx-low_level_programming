#include"main.h"
#include<string.h>
/**
* rev_string- function that reverse  string.
*
* @s: input
*
*/
void rev_string(char *s);
{
	int i = 0, len = strlen(s);

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
