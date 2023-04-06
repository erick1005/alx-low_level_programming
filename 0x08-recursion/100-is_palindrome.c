#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - entry
 * @s: input string pointer
 * Return: 1 for true and 0 for false
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _reverse - entry
 * @s: input string
 * @start: src
 * @end: dest
 * Return: 1 for true and 0 for false
 */
int _reverse(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == (end + 1))
		{
			return (1);
		}
		return (0 + _reverse(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - entry
 * @s: input string
 * Return: 1 for true and 0 for false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (_reverse(s, 0, _strlen(s) - 1));
}
