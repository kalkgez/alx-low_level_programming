#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 *
 * @s: A string
 * @c: The character
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		s++;
	}
	return (0);
}
