#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry
 * @separator: string
 * @n: elements
 * Return: 0 for success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
	
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", (va_arg(args, int)));
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
