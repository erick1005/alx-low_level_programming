#include <stdio.h>

/**
 * main - displays characters in the alphabet
 *
 * Return: returns zero
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		putchar(str);
	putchar('\n');
	return (0);
}
