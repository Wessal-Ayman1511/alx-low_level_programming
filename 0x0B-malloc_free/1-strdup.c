#include "main.h"
/**
 * *_strdup- function allocate new space in memory
 * @str: input
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *ptr = malloc(len * sizeof(char) + 1);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < len ; i++)
			{
				ptr[i] = str[i];
			}
		}
		return (ptr);
	}
