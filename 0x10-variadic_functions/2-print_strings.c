#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings, followed by a new line.
 *
 * @separator: A string that printed between string
 * @n: The number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
