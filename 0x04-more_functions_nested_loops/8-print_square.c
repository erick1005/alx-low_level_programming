#include "main.h"

/**
 * print_square - draws a square shape
 * @#: character to be used
 * @size: the leng and width of the squre
 * Return:void
 */
void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
