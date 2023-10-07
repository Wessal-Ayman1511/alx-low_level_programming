#include "main.h"
/**
 * _strlen- function that return length
 * @s: input
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	;
	return (i);
}
/**
 * *string_nconcat- funcrion that concat two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	int l1 = _strlen(s1);
	int l2 = _strlen(s2);
	char *p = malloc(sizeof(char) * (l1 + n + 1));

	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < l1 + n ; i++)
	{
		if (i < l1)
			p[i] = s1[i];
		else if (i < l1 + n)
			p[i] = s2[i - l1];
	}
	p[i] = '\0';
	return (p);
}
