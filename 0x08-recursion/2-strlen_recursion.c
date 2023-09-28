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
	int c = 0;

	if (*s != '\0')
	{
		c++;
		_strlen_recursion(s + 1)
	}
	else
		return (c);

}
