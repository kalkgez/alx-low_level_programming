#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13.
 *
 * @str: string
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxy";
	char rot_data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (str[i] == data[j])
			{
				str[i] = rot_data[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
