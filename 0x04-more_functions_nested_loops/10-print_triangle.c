#include "main.h"

/**
 * print_triangle - draws a triangular shape
 * @size: ithe number of character it will take
 * @#: characters to use
 * Return:void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < size; i++)
		{
			for (k = size - i; k > 1; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
