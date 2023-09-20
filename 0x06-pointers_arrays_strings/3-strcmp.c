#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int length_s1 = 0;
	int length_s2 = 0;
	int max;
	int i;
	int result = 0;

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}
	if (length_s1 > length_s2)
	{
		max = length_s1;
	}
	else
	{
		max = length_s2;
	}
	for (i = 0 ; i < max ; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}
