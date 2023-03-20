#include <stdio.h>

/**
 * main - the entry of the programme
 *
 * Return: zero for success
 *
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
