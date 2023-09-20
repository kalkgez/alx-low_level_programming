#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * that will use at most n bytes from src.
 *
 * @dest: The first string
 * @src: The second string
 * @n: integer number
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;
	int i = 0;

	while (*(dest + length_dest) != '\0')
	{
		length_dest++;
	}
	while (i < n && *(src + i) != '\0')
	{
		*(dest + length_dest) = *(src + i);
		length_dest++;
		i++;
	}
	*(dest + length_dest) = '\0';
	return (dest);
}
