#include <stdio.h>
/**
 * main - A progra that prints the largest
 * prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int max = 1;
	int i;

	for (i = 2 ; i <= n ; i++)
	{
		if (n % i == 0)
		{
			if (max < i)
			{
				max = i;
			}
			n = n / i;
			i = 1;
		}
	}
	printf("%ld\n", max);
	return (0);
}
