#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function entry
 * Return: 0 for big 1 small
 */
int get_endianness(void)
{
	unsigned int t;
	char *s;

	t = 1;

	s = (char *) &t;
	return ((int)*s);
}
