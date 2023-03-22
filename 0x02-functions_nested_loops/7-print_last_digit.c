#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: digit to be based ob
 * Return: integer
 */
int print_last_digit(int i)
{
	int end;

	end = i % 10;
	if (end < 0)
	{
	end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
