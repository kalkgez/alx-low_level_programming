#include "main.h"
/**
 * int binary_to_uint - A function that converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	
	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			decimal = decimal * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (decimal);
}
