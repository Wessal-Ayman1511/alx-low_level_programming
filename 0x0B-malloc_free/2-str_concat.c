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
	char *ptr = malloc(strlen(s2) + strlen(s1) + 1);
	int i, j = 0,l1 = strlen(s1), l2 = strlen(s2);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = l1 ; i < l1 + l2 ; i++)
		{
			s1[i] = s2[j];
			j++;
		}
		s1[l1 + l2] = '\0';
		return (s1);
	}
}
