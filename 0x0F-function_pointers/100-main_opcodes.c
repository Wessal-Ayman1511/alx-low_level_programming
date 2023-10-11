#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main- entery point
 * @argc: input
 * @argv:input
 * Return: int
*/
int main(int argc, char **argv)
{
	char *pointer = (char *)main;
	int x;

	if (argc != 2)
		printf("Error\n"), exit(1);
	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"), exit(2);
	while (x--)
		printf("%02hhx%s", *pointer++, x ? " " | "\n");
	return (0);
}
