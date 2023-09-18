#include "main.h"
/**
 * puts_half - A unction that prints half of a string, followed by a new line.
 * The function should print the second half of the string
 *
 * @str: String
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int m, i;
	char *ptr = str;

	while (*ptr != '\0')
	{
		n++;
		ptr++;
	}
	if (n % 2 == 0)
	{
		m = n / 2;
	}
	else
	{
		m = (n + 1) / 2;
	}
	for (i = m ; i <= n - 1 ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
