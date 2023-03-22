#include "main.h"

/**
 * main - begining of the programme
 *
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
