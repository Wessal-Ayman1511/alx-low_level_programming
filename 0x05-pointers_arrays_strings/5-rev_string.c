#include"main.h"
#include<string.h>
/**
* rev_string- function that reverse  string.
*
* @s: input
*
*/
void rev_string(char *s);
{
	int i = 0, len = strlen(s);
	char tmp;

	for (i = 0  ; i <= len / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
