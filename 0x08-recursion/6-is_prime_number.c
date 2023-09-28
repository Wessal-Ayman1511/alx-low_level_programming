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
int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, n / 2));
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
int prime(int n, int i)
{
if (i == 1)
	return (1);
else
{
	if (n % i == 0 || n == 1)
	return (0);
	else
	return (prime(n, i - 1));
}
}
