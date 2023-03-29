#include "main.h"
#include <string.h>

/**
 * *_strncpy - coppies a string of characters
 * @dest: destination
 * @src: source
 * @n: n characters
 * Return: string of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
