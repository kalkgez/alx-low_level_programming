#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: The string
 *
 * Retrun: void
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char rev = s[0];

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0 ; i < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
/**
 * infinite_add - A function that adds two numbers.
 * and buffer that the function will use to store the result
 *
 * @n1: The first number
 * @n2: The second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int value1 = 0, value2 = 0;
	int i = 0, j = 0, result = 0;
	int overflow = 0, digit = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		result = value1 + value2 + overflow;
		if (result >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (result % 10) + '0';
		digit++;
		i--;
		j--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
