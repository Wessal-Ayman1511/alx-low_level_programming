#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print numbers
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		if (x == 57)
		{
			putchar(x);
			break;
		}
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
