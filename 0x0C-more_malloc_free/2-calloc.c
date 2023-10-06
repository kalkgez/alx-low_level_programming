#include "main.h"
/**
 * zero_char - A function fills the memory with the same character
 *
 * @s: The memory area to be filled
 * @c: The character
 * @n: The number of times to be copyed
 *
 * Return: pointer
 */
char *zero_char(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = c;
	}
	return (s);
}
/**
 * _calloc - A  function that allocates memory for an array, using malloc.
 *
 * @nmemb: The number of elements in the arry
 * @size: The size of teach element
 *
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	zero_char(ptr, 0, nmemb * size);
	return (ptr);
}
