#include"main.h"
#include<string.h>
/**
**cap_string- function that capitalizes all words of a string.
*
* @s: input
*
* Return: return(cap)
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
		if (s[i] == ' ' || s[i] == '\t' ||
		s[i] == '\n' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' ||
		s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}' ||
		s[i] == '"')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
