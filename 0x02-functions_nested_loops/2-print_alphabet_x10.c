#include "main.h"
/**
 * print_alphabet_x10 - A program that prints alphabet 10 times
 *
 * Return Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char ch;

	while (i <= 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
