#include "main.h"
/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 *
 * @a: String
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
	}
}
