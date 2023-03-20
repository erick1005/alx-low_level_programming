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
		putchar(',');
	}
	putchar('\n');
	return (0);
}
