#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: A string
 * @accept: a string
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (0);
}
