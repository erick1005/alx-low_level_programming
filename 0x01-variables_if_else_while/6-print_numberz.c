#include <stdio.h>

/**
 * main - persing int
 *
 * Return: returns nothing as expected
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((char)(num));
	putchar('\n');
	return (0);
}
