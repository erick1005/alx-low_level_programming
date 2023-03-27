#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - reverses a string
 * @s: input string
 * Return: null
 */
void print_rev(char *s)
{
	int size = strlen(s);

	int i;

	for (i = size - 1; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
