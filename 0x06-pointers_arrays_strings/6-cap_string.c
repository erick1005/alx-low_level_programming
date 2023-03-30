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
	char i;

	while (*str)
	{
		if (isspace((unsigned char)i) && islower((unsigned char)*str))
		{
			*str = (char)toupper((unsigned char)*str);
		}
		i = *str;
		str++;
	}
	return (str);
}
