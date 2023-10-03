#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup- function that  newly allocated space in memory
 * @str: input
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i = 0, len = strlen(str);
	char *ptr = malloc(len);

	if (ptr == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len ; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
