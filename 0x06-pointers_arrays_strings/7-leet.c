#include"main.h"
#include<string.h>
/**
**string_toupper-  changes all lowercase letters of a string to uppercase.
*
* @c: input
*
* Return: return(uppercase)
*/
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'}
	int value [] = {4, 3, 0, 7, 1};
	unsigned int i;

	while(*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 + value[i];
			c++;
		}
	}
	return (cp);
}
