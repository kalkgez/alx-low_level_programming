#include <stdio.h>
#include "main.h"
/**
 * print_array - A function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: array
 * @n: the number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == 0)
		{
			printf("%d", a[0]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
