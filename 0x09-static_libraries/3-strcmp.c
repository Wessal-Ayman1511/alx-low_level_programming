#include"main.h"
#include<string.h>
/**
* _strcmp- function that compare strings
*
* @s1: input
*
* @s2: input
*
* Return: return(1) if they are equale
*
*/
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = (((int)*s1 - 48) - ((int)*s2 - 48));
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
