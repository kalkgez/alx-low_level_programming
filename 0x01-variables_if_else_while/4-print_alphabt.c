#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabates
 * except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
