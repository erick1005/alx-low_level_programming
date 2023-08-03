#include "main.h"
#include <stdio.h>

/**
 * flip_bits - num of bits you would need to flip.
 * @n: input1
 * @m: input2
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int total;

	num = n ^ m;
	total = 0;

	while (num)
	{
		total = total + (num & 1);
		num >>= 1;
	}
	return (total);
}
