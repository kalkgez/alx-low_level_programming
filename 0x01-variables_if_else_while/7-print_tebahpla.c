#include <stdio.h>
/**
 * main - A program that prints alpabate in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabate = 'z';

	while (alphabate >= 'a')
	{
		putchar(alphabate);
		alphabate--;
	}
	putchar('\n');
	return (0);
}
