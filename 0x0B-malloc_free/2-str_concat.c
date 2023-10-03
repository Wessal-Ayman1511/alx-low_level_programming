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
	int i, j = 0;

	if (ptr == "")
	{
		return (NULL);
	}
	else
	{
		for (i = strlen(s1) ; i < strlen(s1) + strlen(s2) ; i++)
		{
			s1[i] = s2[j];
			j++;
		}
		s1[strlen(s2) + strlen(s1)] = '\0';
		return (s1);
	}
}
