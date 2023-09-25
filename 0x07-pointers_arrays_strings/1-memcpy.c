#include"main.h"
#include<string.h>
/**
**_memcpy- function that copies memory area.
*
* @src: input
*
* @dest: input
*
* @n: input
*
* Return: return(pointer)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < strlen(src) ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


