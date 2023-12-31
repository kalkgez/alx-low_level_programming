#include "main.h"
/**
 * _sqrt_recursion - A  function that returns
 * the natural square root of a number.
 *
 * @n: The number to be calculated
 *
 * Return: The root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursion(n, 0));
	}
}
/**
 * sqrt_recursion - A recursion funtion to find the square root
 *
 * @n: A number to be calculated
 * @i: iteration
 *
 * Return: The root
 */
int sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_recursion(n, i + 1));
}
