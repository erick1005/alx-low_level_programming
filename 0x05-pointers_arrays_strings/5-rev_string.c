#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: input string
 * Return:void
 */
void rev_string(char *s)
{
	int k = 0;

	int index = 0;

	char temp;

	while (s[index++])
		k++;
	for (index = k - 1; index >= k / 2; index--)
	{
		temp = s[index];
		s[index] = s[k - index - 1];
		s[k - index - 1] = temp;

	}
}
