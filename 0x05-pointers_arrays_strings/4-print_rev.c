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
	char temp[size];

	int i;

	for (i = 0; i <= size; i++)
	{
		temp[0] = s[size - 1 - i];
	}
	puts(temp);
}
