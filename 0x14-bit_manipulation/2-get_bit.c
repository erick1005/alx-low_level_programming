#include "main.h"
#include <stdio.h>

/**
 * get_bit - entry
 * @n: current bit
 * @index: of the bit
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	num = sizeof(n) * 8 - 1;

	if (index > num)
		return (-1);
	return ((n >> index) & 1);
}
