#include "main.h"
#include <string.h>

/**
 * *_strncat - appends n characters
 * @dest: destination string
 * @src: source
 * @n: bytes to be concated
 * Return: string characters
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
