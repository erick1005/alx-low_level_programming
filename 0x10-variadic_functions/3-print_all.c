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
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c\n", va_arg(args, int));
				break;
			case 'i':
				printf("%d\n", va_arg(args, int));
				break;
			case 'f':
				printf("%f\n", va_arg(args, double));
				break;
			case 's':
				printf("%s\n", va_arg(args, char*));
				break;
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
