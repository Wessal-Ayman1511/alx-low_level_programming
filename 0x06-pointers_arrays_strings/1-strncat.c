#include"main.h"
#include<string.h>
/**
*_strncat- function that concatenates two strings.
*
* @dest: input
*
* @src: input
*
* @n: input
*
* Return: return(poiter)
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), c = 0;

	for (c = 0 ; c < n && src[c] != '\0' ; c++)
		dest[len + c] = src[c];
	dest[len + c] = '\0';
	return (dest);
}
