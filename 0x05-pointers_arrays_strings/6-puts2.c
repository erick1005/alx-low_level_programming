#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints characters
 * @str: string input
 * Return: returns nothing
 */
void puts2(char *str)
{
	int size = strlen(str);
	int i;

	for (i = 0; i < size; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
