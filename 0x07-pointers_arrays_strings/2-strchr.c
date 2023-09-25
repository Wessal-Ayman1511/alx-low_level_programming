#include"main.h"
#include<string.h>
/**
**_strchr- function that locates a character in a string.
*
* @s: input
*
* @c: input
*
* Return: return(pointer)
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			int *p = s + i;
			return(p);
		}
	}
	return ('\0');
}
