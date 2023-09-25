#include"main.h"
#include<string.h>
/**
**_memset- function that fills memory with a constant byte.
*
* @s: input
*
* @b: input
*
* @n: input
*
* Return: return(pointer)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
