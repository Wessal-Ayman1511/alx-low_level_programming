#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup- function that  newly allocated space in memory
 * @str: input
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i, len = strlen(str);
	char *ptr = malloc(len * sizeof(*str) + 1);

	if (*str == NULL || ptr == NULL)
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