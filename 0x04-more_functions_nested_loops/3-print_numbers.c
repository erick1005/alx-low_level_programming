#include "main.h"
#include <unistd.h>

/**
 * print_numbers - displays numbers
 * Return:void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
