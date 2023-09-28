#include"main.h"
#include<string.h>
/**
* is_prime_number- recursive function check prime
*
* @n: input
*
* @i: input
*
* prime- funcrion
*
* Return: value
*/
int prime(int i, int n);
int is_prime_number(int n)
{
	return (prime(2, n));
}
/**
 * prime- recursive function chacks prime numbers
 *
 * @i: input
 *
 * @n: input
 *
 * Return: value
*/
int prime(int i, int n)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (i + 1, n);
}
