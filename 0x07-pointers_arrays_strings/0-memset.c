#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: A  pointer to the memory area
 * @b: A constant byte
 * @n: Amount
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
