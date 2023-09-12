#include"main.h"

/**
* _abs - function to get absolute of number
*
* @n: chack imput of function
*
* Return: always 0 (success)
*
*/
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
