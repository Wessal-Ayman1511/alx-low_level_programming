#include"main.h"

/**
* _isupper - function to chack if iS upper
*
* @c: chack imput of function
*
* Return: return 1 if 'c' is upper
*         otherwise always 0 (success)
*
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
