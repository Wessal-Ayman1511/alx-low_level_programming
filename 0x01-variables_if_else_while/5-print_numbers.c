#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print numbers from 0 to 10
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
