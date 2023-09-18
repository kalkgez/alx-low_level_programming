#include "main.h"
/**
 * swap_int - A unction that swaps the values of two integers.
 *
 * @a: The first integer
 * @b: The second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *b;
	*b = *a;
	*a = num;
}
