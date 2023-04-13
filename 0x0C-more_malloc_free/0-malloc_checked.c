#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - entry
 * @b: bytes
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
