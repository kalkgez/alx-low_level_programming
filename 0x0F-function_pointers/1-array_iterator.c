# include "function_pointers.h"
# include <stdio.h>
/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: An array
 * @size: The amount of elements to be printed
 * @action: A pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
