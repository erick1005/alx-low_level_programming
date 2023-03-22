#include "main.h"

/**
 * print_alphabet_x10 - displays alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
	}
}
