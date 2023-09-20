#include"main.h"
#include<string.h>
/**
*_strcat- function that concatenates two strings.
*
* @dest: input
*
* @src: input
*
* Return: return(poiter)
*/
char *_strcat(char *dest, char *src);
{
	int len = strlen(dest), c = 0;

	for (c = 0 ; src[c] ; c++)
		dest[len++] = src[c];
	return (dest);
}
