#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: src
 * @accept: destination
 * Return: a pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = strpbrk(s, accept);

	return (t);
}
