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

	for (int i = 0; i <= size - 1; i++)
	{
		puts(&s[size - 1 - i]);
	}
	puts("\n");
}
