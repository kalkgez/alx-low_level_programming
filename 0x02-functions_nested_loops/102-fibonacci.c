#include <stdio.h>
/**
 * main -  a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always  (Sucesss)
 */

int main(void)
{
	long num1 = 1;
	long num2 = 2;
	long nextNum;
	int count;

	printf("%ld, %ld", num1, num2);
	for (count = 2 ; count < 50 ; count++)
	{
		nextNum = num1 + num2;
		printf(", %ld", nextNum);
		num1 = num2;
		num2 = nextNum;
	}
	printf("\n");
	return (0);
}
