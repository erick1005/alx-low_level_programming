#include <stdio.h>

/**
 * main - uses fwrites
 *
 * Return: returns zero
 *
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(c, sizeof(char), sizeof(c), stderr);
	return (0);
}
