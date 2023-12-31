#include "main.h"
/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: String
 * @src: String
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
