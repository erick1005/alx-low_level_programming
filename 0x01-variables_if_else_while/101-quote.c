#include <stdio.h>

/**
 * main - print an output to standard error
 *
 * Return: returns 1 at the end of theprogramme
 *
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(c, sizeof(char), sizeof(c), stderr);
	return (0);

}
