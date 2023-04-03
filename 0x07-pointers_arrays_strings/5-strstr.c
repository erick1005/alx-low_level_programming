#include "main.h"
#include <string.h>

/**
 * _strstr - locating a substring function
 * @haystack: main string
 * @needle: occurance
 * Return: a pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = strstr(haystack, needle);

	return (p);
}
