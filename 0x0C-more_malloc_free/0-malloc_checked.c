#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc.
 *
 * @b: A number of bytes to be allocated
 *
 * Return: A pointer to be allocated a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
