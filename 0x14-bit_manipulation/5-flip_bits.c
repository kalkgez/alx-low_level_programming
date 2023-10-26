#include "main.h"
/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int total = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = total >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
