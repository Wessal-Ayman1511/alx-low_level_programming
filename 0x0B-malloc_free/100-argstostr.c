#include "main.h"
#include <string.h>
/**
 * _strlen- funcrion that return length of str
 * @str:input
 * Return: length
*/
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0' ; i++)
	;
	return (i);
}
/**
 * *argstostr- function concatenates all the arguments of your program.
 * @av: input
 * @ac: input
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, nc = 0, cmp = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac ; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, cmp++)
			s[cmp] = av[i][j];
		s[cmp] = '\n';
		cmp++;
	}
	s[cmp] = '\0';
	return (s);
}
