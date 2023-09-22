#include"main.h"
#include<string.h>
/**
**string_toupper-  changes all lowercase letters of a string to uppercase.
*
* @c: input
*
* Return: return(uppercase)
*/
char *string_toupper(char *c)
{
	int i = 0;

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
