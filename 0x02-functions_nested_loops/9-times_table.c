#include "main.h"
/**
 * times_table - A program that print a time table
 *
 * Description: prints up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, ones, tens, result;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			result = a * b;
			ones = result % 10;
			tens = result / 10;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
