#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 *
 * @dest: A memory where it is stored
 * @src: A A memory where is copied
 * @n: The number
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
