#include"main.h"
#include<string.h>
/**
* _pow_recursion- recursive function that calc power
*
* @x: input
*
* @y: input
*
* Return: value
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return ( x * _pow_recursion(x, y - 1))
