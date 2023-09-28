#include"main.h"
#include<string.h>
/**
* _print_rev_recursion- recursive function that  print reversed string
*
* @s: input
*
* Return: always zer
*/
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
