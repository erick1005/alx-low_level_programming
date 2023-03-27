#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: input string
 * Return: null
 */
void puts_half(char *str)
{
	int size = strlen(str);

	if (size % 2 == 0)
	{
		int i;

		for (i = size / 2; i < size; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		int j;

		for (j = (size - 1) / 2; j < size; j++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
