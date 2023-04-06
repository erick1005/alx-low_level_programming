#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: 1 for success
 */
int wildcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != s2)
			return (0);
		*s1++;
		*s2++;
	}
	return (1);
}
