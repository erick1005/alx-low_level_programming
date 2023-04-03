#include "main.h"
#include <string.h>

/**
 * _memcpy - main function copies memory area
 * @dest: destination area
 * @src: origin area
 * @n: size
 * Return: returns the arguments (char)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
