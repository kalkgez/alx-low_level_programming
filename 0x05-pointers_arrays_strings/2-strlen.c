#include "main.h"
/**
 * _strlen - A  function that returns the length of a string.
 *
 * @s: string
 *
 * Return: n (lenth of the string)
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
