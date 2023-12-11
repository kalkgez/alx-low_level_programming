#include "main.h"
/**
 * _abs - A program that computes the absolute value of an integer.
 * @n: The number to be cheched
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		int result = n * -1;

		return (result);
	}
	return (n);
}
