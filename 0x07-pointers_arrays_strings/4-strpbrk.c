#include"main.h"
#include<string.h>
/**
**_strpbrk- function that searches a string for any of a set of bytes.
*
* @s: input
*
* @accept: input
*
* Return: return(pointer)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

