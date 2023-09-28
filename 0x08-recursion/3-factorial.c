#include"main.h"
#include<string.h>
/**
* factorial- recursive function that print factorial
*
* @n: input
*
* Return: return value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if  (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}


