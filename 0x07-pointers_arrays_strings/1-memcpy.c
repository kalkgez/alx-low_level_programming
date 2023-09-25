#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 *
 * @dest: A memory to store
 * @src: A memory where it is copied
 * @n: Number of bytes
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
