#include"main.h"
#include<string.h>
/**
**_strstr- function that locates a substring.
*
* @needle: input
*
* @haystack: input
*
* Return: return(pointer)
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
