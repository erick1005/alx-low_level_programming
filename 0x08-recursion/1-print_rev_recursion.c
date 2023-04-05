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
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	 printf("%c", *s);
}
