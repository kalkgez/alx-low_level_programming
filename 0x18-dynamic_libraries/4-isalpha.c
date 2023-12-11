#include "main.h"
/**
 * _isalpha - A program that checks for alphabetic character.
 * @c: The character to check
 * Return: 1 - if a character, 0 - otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 95) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
