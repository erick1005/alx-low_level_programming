#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets bit value to 0
 * @n: bit in question
 * @index: ns index
 * Return: 1 for success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = sizeof(*n) * 8 - 1;

	if (index > num)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
