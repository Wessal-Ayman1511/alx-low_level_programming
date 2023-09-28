#include"main.h"
#include<string.h>
/**
* _strlen_recursion- recursive function that return length of string
*
* @s: input
*
* Return: return(length)
*/
int _strlen_recursion(char *s)
{
	int c = 1;

	if (*s == '\0')
		return (c);
	c = c + 1;
	_strlen_recursion(s + 1);
}
