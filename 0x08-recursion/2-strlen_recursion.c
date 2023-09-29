#include "main.h"
/**
 * _strlen_recursion - A  function that returns the length of a string.
 *
 * @s: A string
 *
 * Return: The length of the string as an integer.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
