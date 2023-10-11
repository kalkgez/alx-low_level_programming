# include "function_pointers.h"
# include <stdio.h>
/**
 * int_index - A function that searches for an integer.
 *
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: A pointer in for a function
 *
 * Return: -1 - for no element match and size less or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
