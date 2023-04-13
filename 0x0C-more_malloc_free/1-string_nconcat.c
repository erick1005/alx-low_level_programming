#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: string of characters
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0;
	char *str;

	if (s1 != NULL)
		size1 = strlen(s1);

	if (s2 != NULL)
		size2 = strlen(s2);

	if (n >= size2)
		n = size2;

	str = malloc(size1 + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(str, s1);
	}
	if (s1 != NULL)
	{
		strncpy(str + size1, s2, n);
	}

	str[size1 + n] = '\0';
	return (str);
}
