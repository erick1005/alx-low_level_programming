#include "main.h"
#include <stdio.h>

/**
 * print_numbers - displays numbers
 * Return:void
 */
void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
	_putchar(p + '0');
	}
	_putchar('\n');
}
