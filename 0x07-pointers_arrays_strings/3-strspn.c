#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment of s
 * @accept: used to match
 * Return:  a pointer pointing to the last matching character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = strspn(s, accept);

	return (t);
}
