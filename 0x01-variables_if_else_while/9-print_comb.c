#include <stdio.h>

/**
 * main - takes in no parameters
 *
 * Return: returns nothing to the main function
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(',');
				}
		}
	}
	putchar('\n');
	return (0);
}
