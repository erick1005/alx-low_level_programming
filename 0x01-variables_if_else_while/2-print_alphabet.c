#include <stdio.h>

/**
 * main - displays characters in the alphabet
 *
 * Return: returns zero
 */
int main(void)
{
	for (char str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
		putchar('\n');
	}
	return (0);
}
