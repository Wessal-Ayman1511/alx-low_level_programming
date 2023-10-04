#include "main.h"
/**
 * *_strdup- function allocate new space in memory
 * @str: input
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; str[size] != '\0' ; size++)
		;
		char *ptr = malloc(size * sizeof(char) + 1);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i < size ; i++)
			{
				ptr[i] = str[i];
			}
		}
		return (ptr);
	}
}
