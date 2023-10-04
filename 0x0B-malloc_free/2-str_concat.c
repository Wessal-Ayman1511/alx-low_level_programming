#include "main.h"
/**
 * len- function that return length of string
 * @s:input
 * Return: length
 */
int len(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}


/**
 * *str_concat- function that
 * @s2: input
 * @s1: input
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	l1 = len(s1);
	l2 = len(s2);
	ptr = malloc((l1 + l2) *  sizeof(char) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0 ; i <= l1 + l2 ; i++)
		{
			if (i < l1)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - l1];
		}
	}
	s1[i] = '\0';
	return (ptr);
}
