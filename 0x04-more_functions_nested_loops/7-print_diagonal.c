#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length of the line
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j <= n; j++)
			{
				_putchar(92);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
