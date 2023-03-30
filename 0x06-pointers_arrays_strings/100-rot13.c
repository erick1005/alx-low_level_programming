#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encodes a string of characters
 * @str: string input
 * Return: 1 for success always
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{

		if (isalpha(str[i]))
		{
			char offset;
		if (isupper(str[i]))
		{
		offset = 'A';
		}
		else
		{
		offset = 'a';
		}
		str[i] = (str[i] - offset + 13) % 26 + offset;
		}
	}
	return (str);
}
