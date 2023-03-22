#include "main.h"

/**
 * times_table - prints the 9 times table 0 included
 *
 * Return: void returns nothing
 */
void times_table(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
	int k;

	for (k = 0; k <= 9; k++)
	{
	int a;

	a = j * k;

	if (a > 9)
	{
	int b, c;

	b = a % 10;
	c = (a - b) / 10;
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	_putchar(b + '0');
	}
	else
	{
		if (k != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
		_putchar(a + '0');
	}
	}
	_putchar('\n');
	}
}
