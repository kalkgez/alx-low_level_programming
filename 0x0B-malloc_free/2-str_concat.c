#include "main.h"
/**
 * str_concat - A function that concatenates two strings.
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: conct
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0;
	int j = 0;
	int lenght_1 = 0;
	int lenght_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lenght_1] != '\0')
	{
		lenght_1++;
	}
	while (s2[lenght_2] != '\0')
	{
		lenght_2++;
	}
	conct = malloc(sizeof(char) * (lenght_1 + lenght_2 + 1));
	if (conct == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conct[i] = s2[j];
		i++;
		j++;
	}
	conct[i] = '\0';
	return (conct);
}
