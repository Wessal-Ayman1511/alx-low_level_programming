#include <stdio.h>

/**
* main - entery point
*
* @argc: input
*
* @argv: input
*
* Return: always zero
*
*/
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
