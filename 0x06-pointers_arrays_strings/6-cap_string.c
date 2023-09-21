#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
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
			if (str[i - 1] == ' ' ||
			    str[i - 1] == '\t' ||
			    str[i - 1] == '\n' ||
			    str[i - 1] == ',' ||
			    str[i - 1] == ';' ||
			    str[i - 1] == '.' ||
			    str[i - 1] == '!' ||
			    str[i - 1] == '?' ||
			    str[i - 1] == '"' ||
			    str[i - 1] == '(' ||
			    str[i - 1] == ')' ||
			    str[i - 1] == '{' ||
			    str[i - 1] == '}' ||
			    i == 0)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
