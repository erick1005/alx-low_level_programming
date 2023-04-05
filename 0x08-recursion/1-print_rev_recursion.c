#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - entry point
 * @s: string pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int size = strlen(s);
	int i;

	for (i = size - 1; i <= 0; i--)
	{
		putchar(s[i]);
	}
}
