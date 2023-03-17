#include <stdio.h>

/**
 * main - reverse display
 *
 * Return: returns nothing to the main
 */
int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
		putchar(str);
	putchar('\n');
	return (0);
}
