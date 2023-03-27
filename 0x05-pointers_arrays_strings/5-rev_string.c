#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: input string
 * Return:void
 */
void rev_string(char *s)
{
	int k = strlen(s);

	int i;

	for (i = k - 1; i >= k / 2; i--)
	{
		char temp = s[i];

		s[i] = s[k - i - 1];
		s[k - i - i] = temp;
	}
}
