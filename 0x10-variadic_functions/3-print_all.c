#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - entry
 * @format: types of arguments included
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int n, i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);

			printf("%c ", c);
		}
		else if (format[i] == 'i')
		{
			n = va_arg(args, int);

			printf("%d ", n);
		}
		else if (format[i] == 'f')
		{
			double d = va_arg(args, double);

			printf("%f ", d);
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
				printf("(nil) ");
			printf("%s ", s);
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
