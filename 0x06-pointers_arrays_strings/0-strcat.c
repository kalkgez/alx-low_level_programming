#include "main.h"
/**
 * *_strcat - A function that concatenates two strings.
 *
 * @dest: The first string
 * @src: The second string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length_dest = 0;
	int length_src = 0;
	int i;

	while (*(dest + length_dest) != '\0')
	{
		length_dest++;
	}
	while (*(src + length_src) != '\0')
	{
		length_src++;
	}
	for (i = 0 ; i < length_src ; i++)
	{
		*(dest + length_dest + i) = *(src + i);
	}
	*(dest + length_dest + length_src) = '\0';
	return (dest);
}
