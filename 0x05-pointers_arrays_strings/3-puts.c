#include"main.h"

/**
* _puts - a function that prints a string
*
* @str: input
*
*/
void _puts(char *str)
{
	int c;

	for (c = 0 ; *str <= '\0' ; str++)
		printf("%d", *str);
	printf("\n");
}
