#include "main.h"
/**
 * string_toupper - A function that changes all
 * lowercase letters of a string to uppercase.
 *
 * @str: string
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
