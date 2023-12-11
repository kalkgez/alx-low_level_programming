#include "main.h"
/**
 * _isupper - A function that check an upper case
 * @c: The character to be checked
 * Return: 1 - if uppercase, 0 - other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
