#include "main.h"

/**
 * print_alphabet - A function print_alphabet print_alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase < 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
