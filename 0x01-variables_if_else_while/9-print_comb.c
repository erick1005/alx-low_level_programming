#include <stdio.h>

/**
 * main - takes in no parameters
 *
 * Return: returns nothing to the main function
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if (x == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
