#include <stdio.h>

/**
 * main - A program that prints the alphabetic lower and
 * uppercases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a', uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
