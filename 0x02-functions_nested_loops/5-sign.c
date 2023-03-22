#include "main.h"

/**
 * print_sign - prints the sighn of a number
 * @n: number to be checked
 * Return: 1 for +ve and -1 for -ve 0 none
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
