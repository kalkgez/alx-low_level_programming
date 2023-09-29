#include "main.h"
/**
 * is_prime_number - A function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 *
 * @n: An integer to be checked
 *
 * Return: 1 - n is a prime number, 0 - if not
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	return (prime_recursion(n, 2));
}
/**
 * prime_recursion - A recursion function to check if the number i prime
 *
 * @n: An integer to check
 * @i: iteration
 *
 * Return: 1 if prime, 0 is not
 */
int prime_recursion(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n > i + i)
	{
		return (prime_recursion(n, i + 1));
	}
	return (1);
}
