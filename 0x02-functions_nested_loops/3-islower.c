#include"main.h"

/**
* _islower - function to chack if its lower or not
*
* @c: chack imput of function
*
* Return: return 1 if 'c' is lowercase
*         otherwise always 0 (success)
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
