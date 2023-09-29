#include "main.h"
/**
 * is_palindrome - A function that returns 1 if
 * a string is a palindrome and 0 if not.
 *
 * @s: A string to be checked
 *
 * Return: 1 - if palindrome, 0 - if not
 */
int is_palindrome(char *s)
{
	int count;

	count = lenght_recursion(s);
	return (palindrome_recursion(s, count - 1, 0));
}
/**
 * palindrome_recursion - A recursion function to checnk the string
 *
 * @s: The string to be checked
 * @n: The length of the string minus 1
 * @i: iteration
 *
 * Return: 1 - if palindrome, 0 - if not
 */
int palindrome_recursion(char *s, int n, int i)
{
	if (i > n)
	{
		return (1);
	}
	if (s[n] != s[i])
	{
		return (0);
	}
	return (palindrome_recursion(s, n - 1, i + 1));
}
/**
 * lenght_recursion - A recursion function that count the length
 *
 * @s: The string to be counted
 *
 * Return: The length of the string
 */
int lenght_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + lenght_recursion(s + 1));
}
