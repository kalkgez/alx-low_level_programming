#include "main.h"
/**
 * rev_string - A function that reverses a string.
 *
 * @s: String
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char rev = s[0];

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
