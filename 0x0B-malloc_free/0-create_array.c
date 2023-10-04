#include "main.h"
/**
 * create_array - A unction that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The sie of the pointer
 * @c: The character
 *
 * Return: pr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (pr != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			pr[i] = c;
		}
	}
	return (pr);
}
