#include "main.h"
/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *ptr = s;
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	while (n > 0)
	{
		_putchar(*(ptr + n - 1));
		n--;
	}
	_putchar('\n');
}
