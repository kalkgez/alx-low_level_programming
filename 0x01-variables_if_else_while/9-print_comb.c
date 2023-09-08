#include <stdio.h>
/**
 * main -  print the number from 0 to 9 separated with comma.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
