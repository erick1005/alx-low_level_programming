#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - binary to int conversion func
 * @b: input stri
 * Return: int val
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (*b)
		{
			if (*b != '0' && *b != '1')
				return (0);
			number <<= 1;

			if (*b == '1')
				number = number + 1;
			b++;
		}
	}
	return (number);
}
