#include "main.h"
/**
 * puts2 - A function that prints every other character of a string,
 *
 * @str: String
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int n = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		n++;
		ptr++;
	}
	for (i = 0 ; i <= n - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
