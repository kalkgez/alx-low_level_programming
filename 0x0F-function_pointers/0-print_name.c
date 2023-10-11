# include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name
 *
 * @name: A string to be added
 * @f: A pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
