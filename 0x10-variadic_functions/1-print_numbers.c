#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: A comma separator
 * @n: The number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
