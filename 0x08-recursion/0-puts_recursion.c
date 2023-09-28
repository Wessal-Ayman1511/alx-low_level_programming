#include"main.h"
#include<string.h>
/**
* _puts_recursion- recursive function that  print string
*
* @s: input
*
* Return: always zer
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
