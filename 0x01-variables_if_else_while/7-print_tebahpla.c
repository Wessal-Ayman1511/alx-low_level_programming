#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print alphabits
 *
 *Return: always 0 (success)
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
