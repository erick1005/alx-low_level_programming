#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - changes all words to uppercase
 * @str: input
 * Return: a string of characters
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	while (str[i] >= 'A' && str[i] >= 'Z')
		i++;

		if (str[i - 1] == ' ' || str[i - 1] == '\t'
				|| str[i - 1] == '\n' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?'
				|| str[i - 1] == '"' || str[i - 1] == '('
				|| str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}' || i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
