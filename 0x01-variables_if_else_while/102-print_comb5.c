#include <stdio.h>

/**
 * main -entry of the programme
 *
 * Return: returns zero for success
 *
 */
int main(void)
{
	int a, b, x, y;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			if (a == 9 && b == 8)
				break;
		}
	}
	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 9 && y == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
