#include "main.h"
/**
 * _isdigit - A function that check a digit from 0 to 9.
 * @c: The character to be checked
 * Return: 1 - if between 0 to 9, 0 - other
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
