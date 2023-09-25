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
	int i, *p;
	bool flag = false;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			flag = true;
			break;
		}
	}
	if (flag == true)
		return (p);
	else
		return (NULL);
}
