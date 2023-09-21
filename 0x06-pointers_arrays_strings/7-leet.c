#include "main.h"
/**
 * leet - A function that encodes a string into 1337.
 *
 * @str: string
i *
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char alpha[] = "aeotlAEOTL";
	char num[] = "4307143071";

	while (str[i] != '\0')
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}
	return (str);
}
