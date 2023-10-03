#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat- function that
 * @s2: input
 * @s1: input
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	int i = 0;
	int l1 = strlen(s1), l2 = strlen(s2);
	char *ptr = malloc((l1 + l2) *  sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < l1 + l2 ; i++)
		{
			if (i < l1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - l1];
		}
		s1[i] = '\0';
		return (ptr);
	}
}
