#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - displays all natutal numbers to 98
 *@n: begining of the numbers
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
		printf("%d", n++);
		printf("\n");
		break;
	}
	else
	{
	printf("%d ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
