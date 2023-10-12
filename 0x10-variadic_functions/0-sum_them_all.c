# include "variadic_functions.h"
# include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters.
 *
 * @n: number of arguments that will be passed to the function.
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
