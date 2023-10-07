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
	unsigned int i, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l = _strlen(s1);
	p = malloc(sizeof(char) * (l + n + 1));

	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < l + n ; i++)
	{
		if (i < l)
			p[i] = s1[i];
		else if (i < l + n)
			p[i] = s2[i - l];
	}
	p[i] = '\0';
	return (p);
}
