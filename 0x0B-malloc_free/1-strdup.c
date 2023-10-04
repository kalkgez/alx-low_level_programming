#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: A string
 *
 * Return: pr - if it is a string, Null - if insufficient memory was available
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *pr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	pr = malloc((length + 1) * sizeof(char));
	if (pr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < length ; i++)
	{
		pr[i] = str[i];
	}
	return (pr);
}
