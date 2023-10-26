#include "main.h"
/**
 * power_fun - A function that calculates the the power
 *
 * @base: The base
 * @power: The power
 *
 * Return: the value of base over power
 */
unsigned long int  power_fun(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 1 ; i <= power ; i++)
	{
		num *= base;
	}
	return (num);
}
/**
 * print_binary - A function that prints the binary representation of a number.
 *
 * @n: The number to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char flag = 0;

	unsigned long int divisor, check;

	divisor = power_fun(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
