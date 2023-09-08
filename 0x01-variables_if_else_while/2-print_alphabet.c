#include <stdio.h>

/**
 * main - A program that prints the alphabetic lower and
 * uppercases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
