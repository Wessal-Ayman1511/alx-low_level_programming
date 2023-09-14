#include"main.h"

/**
* _isdigit  - function to chack if it isdigit or not
*
* @c: chack imput of function
*
* Return: return 1 if 'c'_isdigit
*         otherwise always 0 (success)
*
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
