#include"main.h"

/**
* _isalpha - function to chack if it is alpha or not
*
* @c: chack imput of function
*
* Return: return 1 if 'c' is alpha
*         otherwise always 0 (success)
*
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
