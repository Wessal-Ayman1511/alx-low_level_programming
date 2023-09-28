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
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));

}
