#include <stdio.h>
#include <stdlib>
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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
