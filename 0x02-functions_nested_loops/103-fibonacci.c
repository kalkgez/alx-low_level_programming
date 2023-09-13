#include <stdio.h>
/**
 * main - A program that prints the sum of
 * the even nummber of fibonacci sequence
 * under 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int nextNum = num1 + num2;
	int sum = 2;

	while (nextNum <= 4000000)
	{
		if (nextNum % 2 == 0)
		{
			sum += nextNum;
		}
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
	}
	printf("%d\n", sum);
	return (0);
}
