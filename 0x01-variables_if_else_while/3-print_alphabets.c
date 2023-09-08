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
	char x = 'a', y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
