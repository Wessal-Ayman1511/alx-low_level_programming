#include"main.h"
#include<string.h>
/**
**_strspn- function that gets the length of a prefix substring.
*
* @s: input
*
* @accept: input
*
* Return: return(pointer)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, c = 0;

	for (i = 0; i < strlen(s) ; i++)
	{
		if (s[i] == accept[c])
		{
			c++;
		}
	}
	return (c);
}
