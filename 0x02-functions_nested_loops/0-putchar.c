#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using puchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
