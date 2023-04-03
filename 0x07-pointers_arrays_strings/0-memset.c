#include "main.h"
#include <string.h>

/**
 * _memset - main function, fills the memory
 * @s: pointer
 * @b: input characters
 * @n: integer input
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
