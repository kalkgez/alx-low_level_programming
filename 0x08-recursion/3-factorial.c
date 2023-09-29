#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: The integer
 *
 * Return: The factorial of the integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
