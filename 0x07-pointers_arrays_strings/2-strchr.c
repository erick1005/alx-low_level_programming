#include "main.h"
#include <string.h>

/**
 * _strchr - searches for the first occurance of a character
 * @s: pointer returned
 * @c: character input
 * Return: a pointer to the first occurance of a character
 */
char *_strchr(char *s, char c)
{
	char *ch = strchr(s, c);
	return (ch);
}
