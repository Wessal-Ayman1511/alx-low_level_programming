#include"main.h"
#include<string.h>
/**
* _sqrt_recursion- recursive function that calc sqr
*
* @n: input
*
* Return: value
*/
int sqr(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr- function to calc sqr
 *
 * @n: input
 *
 * @val: input
 *
 * Return: value
 */
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val - 1));
	else
		return (-1);
}
