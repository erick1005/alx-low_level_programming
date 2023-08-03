#include "main.h"

/**
 * print_binary - changes a num to binary and display
 * @n: num to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
